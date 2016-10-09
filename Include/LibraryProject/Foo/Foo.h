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
**      An Interface of Foo class.
**
**      @file       Foo/Foo.h
**/

#if !defined( LIBPROJ_FOO_INCLUDED_FOO_H )
#    define   LIBPROJ_FOO_INCLUDED_FOO_H

#include    "LibraryProject/Common/LibraryProjectSettings.h"

LIBPROJ_NAMESPACE_BEGIN
namespace  Foo  {

//========================================================================
//
//    Foo  class.
//

class  Foo
{

//========================================================================
//
//    Constructor(s) and Destructor.
//

//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//

//========================================================================
//
//    Public Member Functions.
//
public:

    static  CommonType
    functionFoo(
            CommonType  x,
            CommonType  y);

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

//========================================================================
//
//    Member Variables.
//

//========================================================================
//
//    Other Features.
//
public:
    //  テストクラス。  //
    friend  class   EngineBaseTest;
};

}   //  End of namespace  Foo
LIBPROJ_NAMESPACE_END

#endif
