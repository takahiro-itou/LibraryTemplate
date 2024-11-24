
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(MODULE_TITLE        "Common")

Include (${COMMON_CMAKE_DIR}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(LIBRARY_SOURCE_FILES
       SampleDocument.cpp
)

set(INCLIB_HEADER_FILES
        ${inclib_source_dir}/LibraryProjectSettings.h
        ${inclib_source_dir}/SampleDocument.h
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
