
add_executable       (SampleApplication     SampleApplication.cpp)
target_link_libraries(SampleApplication     ${PROJECT_NAME}-Foo)

install(TARGETS         SampleApplication
        DESTINATION     ${BINTOP_DIR_NAME}/
)
