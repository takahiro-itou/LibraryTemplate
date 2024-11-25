
##----------------------------------------------------------------
##
##    Package Configurations.
##    パッケージ設定。
##

##
##    要求するツールのバージョンを指定する。
##

cmake_minimum_required(VERSION  3.0.2)

##
##    パッケージの情報を指定する。
##

set(PROJECT_NAME        Sample)
set(serial              "0.0.0")

project(${PROJECT_NAME}     VERSION  1.0.0)


##
##    共通の .cmake ファイルの置いてある場所。
##

set(common_cmake_dir        "${PROJECT_SOURCE_DIR}/.CMake")

##
##    ターゲットシステムを判定
##

Include (${common_cmake_dir}/TargetSystem.cmake)


##----------------------------------------------------------------
##
##    プロジェクトの基本設定。
##

##
##    デフォルトのコンパイルオプション。
##

Include (${common_cmake_dir}/DefaultCompileOptions.cmake)

##
##    Project Name Space.
##

set(LIBPROJ_CNF_NAMESPACE   LibraryProject)


##----------------------------------------------------------------
##
##    ディレクトリ名。
##

set(inctop_dir_name         "Include")
set(BINTOP_DIR_NAME         "Bin")
set(libtop_dir_name         "Lib")

Include (${common_cmake_dir}/ConfigDirectory.cmake)


##----------------------------------------------------------------
##
##    ビルド環境の検査。
##

##
##    Check Programs.
##

##
##    Check Header Files.
##

##
##    Check Libraries.
##

##
##    Check Types.
##

##
##    Check Extra Compiler/Linker Options.
##

Include (${common_cmake_dir}/EnableCxx11.cmake)

Include (${common_cmake_dir}/CheckConstExpr.cmake)
Include (${common_cmake_dir}/CheckNullPtr.cmake)
Include (${common_cmake_dir}/CheckOverride.cmake)
Include (${common_cmake_dir}/CheckStaticAssert.cmake)

Include (${common_cmake_dir}/CheckRightValueReference.cmake)
Include (${common_cmake_dir}/CheckDefaultDeclarations.cmake)

##----------------------------------------------------------------
##
##    Additional Packages.
##    外部ライブラリ。
##

set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}  ${common_cmake_dir}/Modules
)

Find_Package (CppUnit)

##----------------------------------------------------------------
##
##    設定を書き込んだファイルを生成。
##

configure_file(
    "${incpkg_source_dir}/.Config/ConfiguredSample.h.in"
    "${incpkg_binary_dir}/.Config/ConfiguredSample.h"
)

configure_file(
    "${incpkg_source_dir}/.Config/Config.h.cmake.in"
    "${incpkg_binary_dir}/.Config/.${PROJECT_NAME}.Config.h"
)

##----------------------------------------------------------------
##
##    パッケージコンフィグレーション。
##

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}Config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    @ONLY
)

install(FILES   "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        DESTINATION  .
)

##----------------------------------------------------------------
##
##    サブディレクトリの追加。
##

Add_SubDirectory (Lib)
Add_SubDirectory (Bin)
