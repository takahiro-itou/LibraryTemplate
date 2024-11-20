//  -*-  coding: utf-8; mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                      ---  Library Project.  ---                      **
**                                                                      **
**          Copyright (C), 2016, Takahiro Itou                          **
**          All Rights Reserved.                                        **
**                                                                      **
*************************************************************************/

/**
**      An Implementation of Test Case 'LibraryProjectSettings'.
**
**      @file       Common/Tests/LibraryProjectSettingsTest.cpp
**/

#include    "TestDriver.h"
#include    "LibraryProject/Common/LibraryProjectSettings.h"

LIBPROJ_NAMESPACE_BEGIN

//========================================================================
//
//    LibraryProjectSettingsTest  class.
//
/**
**    クラス LibraryProjectSettings の単体テスト。
**/

class  LibraryProjectSettingsTest : public  TestFixture
{
    CPPUNIT_TEST_SUITE(LibraryProjectSettingsTest);
    CPPUNIT_TEST(testNameSpace);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual  void   setUp()     override    { }
    virtual  void   tearDown()  override    { }

private:
    void  testNameSpace();
};

CPPUNIT_TEST_SUITE_REGISTRATION( LibraryProjectSettingsTest );

//========================================================================
//
//    Tests.
//

void  LibraryProjectSettingsTest::testNameSpace()
{
    return;
}

LIBPROJ_NAMESPACE_END

//========================================================================
//
//    エントリポイント。
//

int  main(int argc, char * argv[])
{
    return ( executeCppUnitTests(argc, argv) );
}

