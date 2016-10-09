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
**      An Interface of Bar class.
**
**      @file       Bar/Bar.h
**/

#if !defined( LIBPROJ_BAR_INCLUDED_BAR_H )
#    define   LIBPROJ_BAR_INCLUDED_BAR_H

#include    "LibraryProject/Common/LibraryProjectSettings.h"

LIBPROJ_NAMESPACE_BEGIN
namespace  Bar  {

//========================================================================
//
//    Bar  class.
//

class  Bar
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
    functionBar(
            CommonType  x);

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

}   //  End of namespace  Bar
LIBPROJ_NAMESPACE_END

#endif
