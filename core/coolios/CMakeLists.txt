add_library(coolios coolios.cxx)

# see https://stackoverflow.com/a/69315817/671373 about gtest in subdirectories
add_executable(
        coolios_test
        test/coolios_test.cxx
)

target_link_libraries(
        coolios_test
        coolios
        gtest_main
)

gtest_discover_tests(
        coolios_test
)
