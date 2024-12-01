
Include (${common_cmake_dir}/ConfigTarget.cmake)

add_executable       (SampleApplication     SampleApplication.cpp)
target_link_libraries(SampleApplication     ${project_target_prefix}Foo)

install(TARGETS         SampleApplication
        DESTINATION     ${bintop_dir_name}/
)
