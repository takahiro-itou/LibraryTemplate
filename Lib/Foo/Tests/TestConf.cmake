
##----------------------------------------------------------------
##
##    テストの設定。
##

Add_Test (NAME  FooTest
    COMMAND  $<TARGET_FILE:FooTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

Add_Executable (FooTest  FooTest.cpp)
