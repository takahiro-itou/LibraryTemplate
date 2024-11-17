//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                      ---  Library Project.  ---                      **
**                                                                      **
**          Copyright (C), 2016-2024, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      スクリプトによる設定値が書き込まれるヘッダファイル。
**
**      @file       .Config/ConfiguredLibraryProject.h.in
**/

#if !defined( LIBPROJ_CONFIG_INCLUDED_PRE_CONFIG_LIBRARY_PROJECT_H )
#    define   LIBPROJ_CONFIG_INCLUDED_PRE_CONFIG_LIBRARY_PROJECT_H

//========================================================================
//
//    Name Space.
//

/**
**    スクリプトによって設定された名前空間。
**/

#define     LIBPROJ_CNF_NS                  LibraryProject

/**
**    名前空間。
**/

#define     LIBPROJ_NAMESPACE               LIBPROJ_CNF_NS

#define     LIBPROJ_NAMESPACE_BEGIN         namespace  LIBPROJ_CNF_NS  {

#define     LIBPROJ_NAMESPACE_END           }

//========================================================================
//
//    Compile Features.
//

//----------------------------------------------------------------
//
//    キーワード constexpr  の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_CONSTEXPR            1
#else
#    undef      LIBPROJ_ENABLE_CONSTEXPR
#endif

#if ( LIBPROJ_ENABLE_CONSTEXPR )
#    define     CONSTEXPR_VAR       constexpr
#    define     CONSTEXPR_FUNC      constexpr
#else
#    define     CONSTEXPR_VAR       const
#    define     CONSTEXPR_FUNC
#endif

//----------------------------------------------------------------
//
//    キーワード nullptr  の検査。
//

#if ( 1 )
#    define     LIBPROJ_ENABLE_NULLPTR              1
#else
#    if !defined( nullptr )
#        define     nullptr     NULL
#    endif
#    undef      LIBPROJ_ENABLE_NULLPTR
#endif

//----------------------------------------------------------------
//
//    キーワード override の検査。
//

#if ( 1 )
#    define     LIBPROJ_ENABLE_OVERRIDE             1
#else
#    if !defined( override )
#        define     override
#    endif
#    undef      LIBPROJ_ENABLE_OVERRIDE
#endif

//----------------------------------------------------------------
//
//    キーワード static_assert  の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_STATIC_ASSERT        1
#else
#    undef      LIBPROJ_ENABLE_STATIC_ASSERT
#endif

//----------------------------------------------------------------
//
//    右辺値参照の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_RVALUEREF            1
#else
#    undef      LIBPROJ_ENABLE_RVALUEREF
#endif

//----------------------------------------------------------------
//
//    不要なムーブ指定に関する警告の検査。
//

#if ( 0 )
#    define     LIBPROJ_ERROR_PESSIMIZING_MOVE      1
#else
#    undef      LIBPROJ_ERROR_PESSIMIZING_MOVE
#endif

//----------------------------------------------------------------
//
//    コピーコンストラクタのデフォルト宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_COPYCTOR_DEFAULT     1
#else
#    undef      LIBPROJ_ENABLE_COPYCTOR_DEFAULT
#endif

//----------------------------------------------------------------
//
//    コピーコンストラクタのデリート宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_COPYCTOR_DELETE      1
#else
#    undef      LIBPROJ_ENABLE_COPYCTOR_DELETE
#endif

//----------------------------------------------------------------
//
//    コピー代入演算子のデフォルト宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_COPYOPEQ_DEFAULT     1
#else
#    undef      LIBPROJ_ENABLE_COPYOPEQ_DEFAULT
#endif

//----------------------------------------------------------------
//
//    コピー代入演算子のデリート宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_COPYOPEQ_DELETE      1
#else
#    undef      LIBPROJ_ENABLE_COPYOPEQ_DELETE
#endif

//----------------------------------------------------------------
//
//    ムーブコンストラクタの宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVECTOR_DECLARE     1
#else
#    undef      LIBPROJ_ENABLE_MOVECTOR_DECLARE
#endif

//----------------------------------------------------------------
//
//    ムーブコンストラクタのデフォルト宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVECTOR_DEFAULT     1
#else
#    undef      LIBPROJ_ENABLE_MOVECTOR_DEFAULT
#endif

//----------------------------------------------------------------
//
//    ムーブコンストラクタのデリート宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVECTOR_DELETE      1
#else
#    undef      LIBPROJ_ENABLE_MOVECTOR_DELETE
#endif

//----------------------------------------------------------------
//
//    ムーブ代入演算子の宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVEOPEQ_DECLARE     1
#else
#    undef      LIBPROJ_ENABLE_MOVEOPEQ_DECLARE
#endif

//----------------------------------------------------------------
//
//    ムーブ代入演算子のデフォルト宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVEOPEQ_DEFAULT     1
#else
#    undef      LIBPROJ_ENABLE_MOVEOPEQ_DEFAULT
#endif

//----------------------------------------------------------------
//
//    ムーブ代入演算子のデリート宣言の検査。
//

#if ( 0 )
#    define     LIBPROJ_ENABLE_MOVEOPEQ_DELETE      1
#else
#    undef      LIBPROJ_ENABLE_MOVEOPEQ_DELETE
#endif

#endif
