
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       "Foo")
Set (MODULE_OUTPUT_NAME    "Foo")
Set (MODULE_TITLE          "Foo")

Set (inclib_source_dir     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (inclib_binary_dir     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
        Foo.cpp
)

Set (INCLIB_HEADER_FILES
        ${inclib_source_dir}/Foo.h
)

Set (MODULE_NEEDS_LIBRARIES
        ${PROJECT_NAME}-${LIBRARIES_TARGET_PREFIX}Bar
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

