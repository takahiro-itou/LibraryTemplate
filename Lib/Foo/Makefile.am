
##
##    ライブラリのビルドとインストール。
##

##
##    List of Directories.
##

module_dir_name         =  Foo
SUBDIRS                 =  .  Tests

include  $(top_srcdir)/.M4/Makefiles/DirList.inc
include  $(top_srcdir)/.M4/Makefiles/DefVars.inc

##
##    List of Source and Header Files.
##

extra_library_source_files  =
extra_library_header_files  =
extra_noinst_data_files     =
extra_noinst_header_files   =

library_source_files        +=  \
        Foo.cpp                 \
        ${extra_library_source_files}

LIBRARY_INSTANTIATIONS      +=
LIBRARY_INLINE_FILES        +=

dist_noinst_data_files      +=  \
        ${extra_noinst_data_files}

dist_noinst_header_files    +=  \
        ${extra_noinst_header_files}

inclib_header_files         +=  \
        ${inclib_source_dir}/Foo.h     \
        ${extra_library_header_files}

inclib_nodist_header_files  +=

library_install_srcfiles    +=  \
        ${LIBRARY_INLINE_FILES}

library_compile_srcfiles    +=  \
        ${library_source_files}    \
        ${LIBRARY_INSTANTIATIONS}

##
##    List of Libraries.
##

static_libraries_list   +=  libsampleFoo.static.a
shared_libraries_list   +=

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

libsampleFoo_static_a_SOURCES   =  ${library_source_files}
