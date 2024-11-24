
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       ".Config")
Set (MODULE_OUTPUT_NAME    "Config")
Set (MODULE_TITLE          "Config")

Set (inclib_source_dir     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (inclib_binary_dir     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
)

Set (INCLIB_HEADER_FILES
        ${inclib_binary_dir}/ConfiguredLibraryProject.h
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${COMMON_CMAKE_DIR}/BuildLibraryCommon.cmake)

