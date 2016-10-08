
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       "Foo")
Set (MODULE_OUTPUT_NAME    "Foo")
Set (MODULE_TITLE          "Foo")

Set (INCLIB_SOURCE_DIR     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (INCLIB_BINARY_DIR     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
        Foo.cpp
)

Set (INCLIB_HEADER_FILES
        ${INCLIB_SOURCE_DIR}/Foo.h
)

Set (MODULE_NEEDS_LIBRARIES
        ${PROJECT_NAME}-${LIBRARIES_TARGET_PREFIX}Bar
)

##----------------------------------------------------------------
##
##    ビルドとインストールの設定。
##

Include (${COMMON_CMAKE_DIR}/BuildLibraryCommon.cmake)

