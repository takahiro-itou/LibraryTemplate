
##----------------------------------------------------------------
##
##    モジュールの設定。
##

set(MODULE_DIR_NAME     ".Config")
set(MODULE_TITLE        "Config")

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

