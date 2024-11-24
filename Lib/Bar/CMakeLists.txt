
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Bar")

Include (${COMMON_CMAKE_DIR}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(LIBRARY_SOURCE_FILES
        Bar.cpp
)

set(INCLIB_HEADER_FILES
        ${inclib_source_dir}/Bar.h
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${COMMON_CMAKE_DIR}/BuildLibraryCommon.cmake)

##----------------------------------------------------------------
##
##    テストの設定。
##

Add_SubDirectory (Tests)

