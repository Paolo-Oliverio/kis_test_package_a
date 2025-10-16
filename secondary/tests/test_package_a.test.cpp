#include <kis_test_package_a/kis_test_package_a.hpp>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

TEST_CASE("Fake test that always passes") {
    CHECK(true);
}