
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   LibraryProjectSettingsTest
    COMMAND  $<TARGET_FILE:LibraryProjectSettingsTest>
)

add_test(NAME   SampleDocumentTest
    COMMAND  $<TARGET_FILE:SampleDocumentTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(LibraryProjectSettingsTest   LibraryProjectSettingsTest.cpp)
add_executable(SampleDocumentTest           SampleDocumentTest.cpp)
