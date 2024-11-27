
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Bar")

Include (${common_cmake_dir}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(library_source_files
        Bar.cpp
)

set(INCLIB_HEADER_FILES
        ${inclib_source_dir}/Bar.h
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

