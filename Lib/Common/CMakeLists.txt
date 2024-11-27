
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_title        "Common")

Include (${common_cmake_dir}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(library_source_files
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

Include (${common_cmake_dir}/BuildLibraryCommon.cmake)

##----------------------------------------------------------------
##
##    テストの設定。
##

Add_SubDirectory (Tests)
