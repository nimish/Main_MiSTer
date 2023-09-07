cmake_minimum_required( VERSION 3.26 )
project( mister C CXX )

set( CMAKE_CXX_EXTENSIONS on )
set( CMAKE_C_EXTENSIONS on )

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_C_STANDARD 17 )

set( HEADERS
    joymapping.h
    input.h
    file_io.h
    debug.h
    battery.h
    cd.h
    DiskImage.h
    recent.h
    ide_cdrom.h
    logo.h
    scheduler.h
    ide.h
    fpga_base_addr_ac5.h
    str_util.h
    scaler.h
    audio.h
    gamecontroller_db.h
    cheats.h
    fpga_io.h
    sxmlc.h
    fpga_manager.h
    menu.h
    video.h
    shmem.h
    spi.h
    brightness.h
    profiling.h
    fpga_reset_manager.h
    smbus.h
    cfg.h
    osd.h
    user_io.h
    hardware.h
    bootcore.h
    offload.h
    mat4x4.h
    fpga_system_manager.h
    fpga_nic301.h
    charrom.h
    support.h
)

set( SOURCES

    user_io.cpp
    ide_cdrom.cpp
    DiskImage.cpp
    ide.cpp
    hardware.cpp
    charrom.cpp
    cheats.cpp
    cfg.cpp
    input.cpp
    fpga_io.cpp
    bootcore.cpp
    menu.cpp
    brightness.cpp
    audio.cpp
    video.cpp
    offload.cpp
    file_io.cpp
    scheduler.cpp
    spi.cpp
    str_util.cpp
    recent.cpp
    gamecontroller_db.cpp
    shmem.cpp
    smbus.cpp
    joymapping.cpp
    battery.cpp
    profiling.cpp
    scaler.cpp
    main.cpp
    osd.cpp
    sxmlc.c
)

add_executable( mister ${HEADERS} ${SOURCES} )
target_include_directories( mister PRIVATE
    lib/libchdr/include
    lib/md5
    lib/imlib2
    lib/miniz
    lib/lzma
    lib/libco
    lib/flac/include
    lib/bluetooth
)

target_compile_definitions(mister PRIVATE _LARGEFILE64_SOURCE _FILE_OFFSET_BITS)
