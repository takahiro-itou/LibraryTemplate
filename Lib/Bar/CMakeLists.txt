
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       "Bar")
Set (MODULE_OUTPUT_NAME    "Bar")
Set (MODULE_TITLE          "Bar")

Set (INCLIB_SOURCE_DIR     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (INCLIB_BINARY_DIR     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
        Bar.cpp
)

Set (INCLIB_HEADER_FILES
        ${INCLIB_SOURCE_DIR}/Bar.h
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${COMMON_CMAKE_DIR}/BuildLibraryCommon.cmake)

