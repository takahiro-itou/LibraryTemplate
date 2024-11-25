
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_dir_name     ".Config")
set(module_title        "Config")

Include (${common_cmake_dir}/ConfigModule.cmake)

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

set(LIBRARY_SOURCE_FILES
)

set(INCLIB_HEADER_FILES
        ${inclib_binary_dir}/ConfiguredLibraryProject.h
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${common_cmake_dir}/BuildLibraryCommon.cmake)

