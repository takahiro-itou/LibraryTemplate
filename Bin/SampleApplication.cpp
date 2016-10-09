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
**      サンプルプログラム。
**
**      @file       Bin/SampleApplication.cpp
**/

#include    "LibraryProject/Foo/Foo.h"

#include    <iostream>

using   namespace   LIBPROJ_NAMESPACE;

int  main(int argc, char * argv[])
{
    std::cout   <<  Foo::Foo::functionFoo(2, 3)
                <<  std::endl;
    return ( 0 );
}
