#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "AlgoCpp/algorithms/search/linearSearch.hpp"
#include <array>
#include <catch2/catch.hpp>
#include <iostream>
#include <vector>

using namespace algocpp::search;

TEST_CASE("Check if linear search is working", "[linearSearch]") {
    std::vector<int> test1 = {1, 4, 5, 2, 3};
    std::vector<int> test2 = {1};
    std::vector<char> test3 = {'c', 'b', 'x', 'm', 'n'};

    REQUIRE(linearSearch(test1, 5) == true);
    REQUIRE(linearSearch(test1, 7) == false);
    REQUIRE(linearSearch(test2, 1) == true);
    REQUIRE(linearSearch(test2, 5) == false);
    REQUIRE(linearSearch(test3, 'b') == true);
    REQUIRE(linearSearch(test3, 'A') == false);
}
