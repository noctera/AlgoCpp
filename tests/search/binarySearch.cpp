#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include <AlgoCpp/algorithms/search/binarySearch.hpp>
#include <array>
#include <catch2/catch.hpp>
#include <iostream>
#include <vector>

using namespace algocpp::search;

TEST_CASE("Check if binary search is working", "[binarySearch]")
{
    std::vector<int> test1 = { 1, 2, 3, 4, 5 };
    std::vector<int> test2 = { 1, 4, 10, 30 };
    std::vector<char> test3 = { 'b', 'c', 'm', 'n', 'x' };

    REQUIRE(binarySearch(test1, 5) == 4);
    REQUIRE(binarySearch(test1, 2) == 1);
    REQUIRE(binarySearch(test2, 10) == 2);
    REQUIRE(binarySearch(test2, 5) == -1);
    REQUIRE(binarySearch(test3, 'b') == 0);
    REQUIRE(binarySearch(test3, 'A') == -1);
}