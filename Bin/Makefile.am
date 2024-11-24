
##
##    バイナリのビルドとインストール。
##

##
##    List of Directories.
##

MODULE_DIR_NAME         =  Binary
SUBDIRS                 =  .

include  $(top_srcdir)/.M4/Makefile.DirList.inc

##
##    List of Source and Header Files.
##

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
AM_LDFLAGS              =  -L${libtop_binary_dir}

##
##    List of Installs.
##

bin_PROGRAMS            =  \
        SampleApplication

dist_noinst_DATA        =  \
        CMakeLists.txt

##
##    Build Executables.
##

SampleApplication_SOURCES   =  SampleApplication.cpp
SampleApplication_LDADD     =  -lsampleFoo

