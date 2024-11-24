
##----------------------------------------------------------------
##
##    モジュールの設定。
##

Set (MODULE_DIR_NAME       "Common")
Set (MODULE_OUTPUT_NAME    "Common")
Set (MODULE_TITLE          "Common")

Set (inclib_source_dir     "${INCLUDE_SOURCE_DIR}/${MODULE_DIR_NAME}")
Set (inclib_binary_dir     "${INCLUDE_BINARY_DIR}/${MODULE_DIR_NAME}")

##----------------------------------------------------------------
##
##    ソースファイルとヘッダファイルのリスト。
##

Set (LIBRARY_SOURCE_FILES
       SampleDocument.cpp
)

Set (INCLIB_HEADER_FILES
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
