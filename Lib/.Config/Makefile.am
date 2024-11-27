
##
##    ライブラリのビルドとインストール。
##

##
##    List of Directories.
##

module_dir_name         =  .Config
SUBDIRS                 =  .

include  $(top_srcdir)/.M4/Makefiles/DirList.inc
include  $(top_srcdir)/.M4/Makefiles/DefVars.inc

##
##    List of Source and Header Files.
##

extra_library_source_files  =
extra_library_header_files  =
extra_noinst_data_files     =
extra_noinst_header_files   =

LIBRARY_SOURCE_FILES        +=  \
        ${extra_library_source_files}

LIBRARY_INSTANTIATIONS      +=
LIBRARY_INLINE_FILES        +=

dist_noinst_data_files      +=  \
        ${inclib_source_dir}/Config.h.cmake.in  \
        ${extra_noinst_data_files}

dist_noinst_header_files    +=  \
        ${extra_noinst_header_files}

INCLIB_HEADER_FILES         +=  \
        ${extra_library_header_files}

INCLIB_NODIST_HEADER_FILES  +=  \
        ${inclib_binary_dir}/ConfiguredSample.h

LIBRARY_INSTALL_SRCFILES    +=  \
        ${LIBRARY_INLINE_FILES}

LIBRARY_COMPILE_SRCFILES    +=  \
        ${LIBRARY_SOURCE_FILES}    \
        ${LIBRARY_INSTANTIATIONS}

##
##    List of Libraries.
##

STATIC_LIBRARIES_LIST   +=
SHARED_LIBRARIES_LIST   +=

##
##    Internal Libraries.
##

##
##    Include Common Install Settings.
##

include  $(top_srcdir)/.M4/Makefiles/Install.inc

##
##    Build Libraries.
##
