
##
##    ライブラリのビルドとインストール。
##

##
##    List of Directories.
##

module_dir_name         =  Bar
SUBDIRS                 =  .  Tests

include  $(top_srcdir)/.M4/Makefiles/DirList.inc

##
##    List of Source and Header Files.
##

extra_library_source_files  =
extra_library_header_files  =
extra_noinst_data_files     =
EXTRA_NOINST_HEADER_FILES   =

LIBRARY_SOURCE_FILES        =  \
        Bar.cpp                \
        ${extra_library_source_files}

LIBRARY_INSTANTIATIONS      =
LIBRARY_INLINE_FILES        =

dist_noinst_data_files      =  \
        CMakeLists.txt              \
        ${extra_noinst_data_files}

dist_noinst_header_files    =  \
        ${EXTRA_NOINST_HEADER_FILES}

INCLIB_HEADER_FILES         =  \
        ${inclib_source_dir}/Bar.h     \
        ${extra_library_header_files}

INCLIB_NODIST_HEADER_FILES  =

LIBRARY_INSTALL_SRCFILES    =  \
        ${LIBRARY_INLINE_FILES}

LIBRARY_COMPILE_SRCFILES    =  \
        ${LIBRARY_SOURCE_FILES}    \
        ${LIBRARY_INSTANTIATIONS}

##
##    List of Libraries.
##

STATIC_LIBRARIES_LIST   =  libsampleBar.static.a
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

libsampleBar_static_a_SOURCES   =  ${LIBRARY_SOURCE_FILES}

