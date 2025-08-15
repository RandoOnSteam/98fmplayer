cmake_minimum_required(VERSION 3.10)
project(98fmplayer)

# Define the output executable name
set(TARGET 98fmplayer)

# Set source files
set(FMDRIVER_OBJS
    fmdriver/fmdriver_pmd
    fmdriver/fmdriver_fmp
    fmdriver/fmdriver_common
    fmdriver/ppz8
)

set(LIBOPNA_OBJS
    libopna/opna
    libopna/opnatimer
    libopna/opnafm
    libopna/opnassg
    libopna/opnassg-sinc-c
    libopna/opnadrum
    libopna/opnaadpcm
)

set(FMDSP_OBJS
    fmdsp/fmdsp-pacc
    pacc/pacc-d3d9
    fmdsp/fmdsp_platform_win
    fmdsp/font_fmdsp_small
)

set(TONEDATA_OBJS
    tonedata/tonedata
)

set(SSEOBJBASE
    libopna/opnassg-sinc-sse2
)

set(OBJBASE
    win32/main
    fft/fft
    win32/toneview
    win32/oscilloview
    win32/wavesave
    win32/wavewrite
    win32/soundout
    win32/dsoundout
    win32/waveout
    common/winfont
    win32/guid
    common/fmplayer_file
    common/fmplayer_file_win
    common/fmplayer_drumrom_win
    common/fmplayer_fontrom_win
    fmdsp/font_rom
    common/fmplayer_work_opna
    win32/about
    ${FMDRIVER_OBJS}
    ${LIBOPNA_OBJS}
    ${TONEDATA_OBJS}
    ${FMDSP_OBJS}
    ${SSEOBJBASE}
    win32/configdialog
)

# Resource file
set(RESBASE win32/lnf)

# Libraries
set(LIBBASE
    user32
    kernel32
    ole32
    uuid
    comdlg32
    gdi32
    shlwapi
    winmm
    shell32
    ksuser
)

# Icon and manifest
set(ICONFILES win32/fmplayer.png win32/fmplayer32.png)
set(MANIFEST win32/lnf.manifest)

# Compiler definitions
add_definitions(
    -DUNICODE
    -D_UNICODE
    -DWINVER=0x0500
    -D_WIN32_WINNT=0x0500
    -DDIRECTSOUND_VERSION=0x0800
    -DFMPLAYER_FILE_WIN_UTF16
    -DLIBOPNA_ENABLE_LEVELDATA
    -DLIBOPNA_ENABLE_OSCILLO
)
if(NOT CMAKE_C_COMPILER_ID MATCHES "MSVC" OR CMAKE_C_COMPILER_VERSION VERSION_GREATER_EQUAL 19.30)
	add_compile_options(/experimental:c11atomics /std:c11)
endif()
add_compile_options(/TC /volatile:iso)
include_directories(
    win32
    fmdriver
    libopna
    fmdsp
    common
    tonedata
    ./
)



# Assuming all .c files match the object names
foreach(OBJ ${OBJBASE})
    list(APPEND SOURCES ${OBJ}.c)
endforeach()

# Create the executable
add_executable(${TARGET} ${SOURCES})

# Link libraries
foreach(LIB ${LIBBASE})
    target_link_libraries(${TARGET} ${LIB})
endforeach()

# Handle resources (Windows-specific)
if(WIN32)
    #target_sources(${TARGET} PRIVATE ${RESBASE}.rc)
    #set_source_files_properties(${RESBASE}.rc PROPERTIES LANGUAGE RC)
endif()

# Set icon for Windows
if(WIN32)
    set_target_properties(${TARGET} PROPERTIES WIN32_EXECUTABLE TRUE)
    #set_target_properties(${TARGET} PROPERTIES LINK_FLAGS "/MANIFEST:EMBED")
    target_sources(${TARGET} PRIVATE ${ICON})
endif()


