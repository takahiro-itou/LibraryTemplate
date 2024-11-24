
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(module_dir_name     ".Config")
set(module_title        "Config")

Include (${COMMON_CMAKE_DIR}/ConfigModule.cmake)

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

Include (${COMMON_CMAKE_DIR}/BuildLibraryCommon.cmake)

