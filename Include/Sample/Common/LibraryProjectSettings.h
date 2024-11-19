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
**      プロジェクトの設定。
**
**      @file       Common/LibraryProjectSettings.h
**/

#if !defined( LIBPROJ_COMMON_INCLUDED_LIBRARY_PROJECT_SETTINGS_H )
#    define   LIBPROJ_COMMON_INCLUDED_LIBRARY_PROJECT_SETTINGS_H

//  スクリプトによる設定値が書き込まれたヘッダを読み込む。  //
#if defined( SAMPLE_USE_PRE_CONFIGURED_MSVC )
#    include    "LibraryProject/.Config/PreConfigLibraryProject.msvc.h"
#else
#    include    "LibraryProject/.Config/ConfiguredLibraryProject.h"
#endif

LIBPROJ_NAMESPACE_BEGIN

/**
**    ダミーの型宣言。
**/

typedef     int     CommonType;

LIBPROJ_NAMESPACE_END

#endif
