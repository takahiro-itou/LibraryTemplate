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
**      An Implementation of Foo class.
**
**      @file       Foo/Foo.h
**/

#include    "LibraryProject/Foo/Foo.h"

#include    "LibraryProject/Bar/Bar.h"

LIBPROJ_NAMESPACE_BEGIN
namespace  Foo  {

//========================================================================
//
//    Foo  class.
//

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

CommonType
Foo::functionFoo(
        CommonType  x,
        CommonType  y)
{
    return ( Bar::Bar::functionBar(x) + Bar::Bar::functionBar(y) );
}

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Foo
LIBPROJ_NAMESPACE_END
