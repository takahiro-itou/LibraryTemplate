
##
##    ライブラリのビルドとインストール。
##

##
##    List of Directories.
##

module_dir_name         =  Common
SUBDIRS                 =  .  Tests

include  $(top_srcdir)/.M4/Makefiles/DirList.inc

##
##    List of Source and Header Files.
##

EXTRA_LIBRARY_SOURCE_FILES  =
EXTRA_LIBRARY_HEADER_FILES  =
EXTRA_NOINST_DATA_FILES     =
EXTRA_NOINST_HEADER_FILES   =

LIBRARY_SOURCE_FILES        =  \
        SampleDocument.cpp             \
        ${EXTRA_LIBRARY_SOURCE_FILES}

LIBRARY_INSTANTIATIONS      =
LIBRARY_INLINE_FILES        =

dist_noinst_data_files      =  \
        CMakeLists.txt              \
        ${EXTRA_NOINST_DATA_FILES}

dist_noinst_header_files    =  \
        ${EXTRA_NOINST_HEADER_FILES}

INCLIB_HEADER_FILES         =  \
        ${inclib_source_dir}/SampleDocument.h  \
        ${inclib_source_dir}/SampleSettings.h  \
        ${EXTRA_LIBRARY_HEADER_FILES}

INCLIB_NODIST_HEADER_FILES  =

LIBRARY_INSTALL_SRCFILES    =  \
        ${LIBRARY_INLINE_FILES}

LIBRARY_COMPILE_SRCFILES    =  \
        ${LIBRARY_SOURCE_FILES}    \
        ${LIBRARY_INSTANTIATIONS}

##
##    List of Libraries.
##

STATIC_LIBRARIES_LIST   =  libsampleCommon.static.a
SHARED_LIBRARIES_LIST   =

##
##    Internal Libraries.
##

##
##    Compile and Link Options.
##

AM_CPPFLAGS          =  \
        -I${inctop_source_dir}
AM_CFLAGS               =
AM_CXXFLAGS             =

##
##    Include Common Install Settings.
##

include  $(top_srcdir)/.M4/Makefiles/Install.inc

##
##    Build Libraries.
##

libsampleCommon_static_a_SOURCES    =  ${LIBRARY_SOURCE_FILES}

