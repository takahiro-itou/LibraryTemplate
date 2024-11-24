
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       "Bar")
Set (MODULE_OUTPUT_NAME    "Bar")
Set (MODULE_TITLE          "Bar")

Set (inclib_source_dir     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (inclib_binary_dir     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
        Bar.cpp
)

Set (INCLIB_HEADER_FILES
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

