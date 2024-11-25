
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Foo")

Include (${common_cmake_dir}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(LIBRARY_SOURCE_FILES
        Foo.cpp
)

set(INCLIB_HEADER_FILES
        ${inclib_source_dir}/Foo.h
)

set(MODULE_NEEDS_LIBRARIES
        ${PROJECT_NAME}-${LIBRARIES_TARGET_PREFIX}Bar
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${common_cmake_dir}/BuildLibraryCommon.cmake)

##----------------------------------------------------------------
##
##    テストの設定。
##

Add_SubDirectory (Tests)
