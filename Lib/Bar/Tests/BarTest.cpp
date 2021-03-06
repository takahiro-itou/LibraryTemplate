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
**      An Implementation of Test Case 'Bar'.
**
**      @file       Bar/Tests/BarTest.cpp
**/

#include    "TestDriver.h"
#include    "LibraryProject/Bar/Bar.h"

LIBPROJ_NAMESPACE_BEGIN
namespace  Bar  {

//========================================================================
//
//    BarTest  class.
//
/**
**    クラス Bar  の単体テスト。
**/

class  BarTest : public  TestFixture
{
    CPPUNIT_TEST_SUITE(BarTest);
    CPPUNIT_TEST(testFunctionBar1);
    CPPUNIT_TEST(testFunctionBar2);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual  void   setUp()     override    { }
    virtual  void   tearDown()  override    { }

private:
    void  testFunctionBar1();
    void  testFunctionBar2();
};

CPPUNIT_TEST_SUITE_REGISTRATION( BarTest );

//========================================================================
//
//    Tests.
//

void  BarTest::testFunctionBar1()
{
    CPPUNIT_ASSERT_EQUAL( 0, Bar::functionBar(0) );
    CPPUNIT_ASSERT_EQUAL( 1, Bar::functionBar(1) );
    CPPUNIT_ASSERT_EQUAL( 4, Bar::functionBar(2) );
    CPPUNIT_ASSERT_EQUAL( 9, Bar::functionBar(3) );
}

void  BarTest::testFunctionBar2()
{
    CPPUNIT_ASSERT_EQUAL( 1, Bar::functionBar(-1) );
    CPPUNIT_ASSERT_EQUAL( 4, Bar::functionBar(-2) );
    CPPUNIT_ASSERT_EQUAL( 9, Bar::functionBar(-3) );
}

}   //  End of namespace  Bar
LIBPROJ_NAMESPACE_END

//========================================================================
//
//    エントリポイント。
//

int  main(int argc, char * argv[])
{
    return ( executeCppUnitTests(argc, argv) );
}
