
##----------------------------------------------------------------
##
##    テストの設定。
##

Add_Test (NAME  LibraryProjectSettingsTest
    COMMAND  $<TARGET_FILE:LibraryProjectSettingsTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

Add_Executable (LibraryProjectSettingsTest  LibraryProjectSettingsTest.cpp)

