#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "AlgoCpp/Algorithms/Sorting/BubbleSort.hpp"
#include <catch2/catch.hpp>
#include <vector>


TEST_CASE("Check if Bubble sort is sorting the right way", "[bubbleSort]") {
    std::vector<int> test1 = {1, 4, 5, 2, 3};
    std::vector<int> test2 = {1, 2, 5, 2, 3};
    std::vector<int> test3 = {1, 1, 1, 1, 1};
    std::vector<int> test4 = {1};
    std::array<int, 5> test5 = {5, 3, 1, 4, 2};
    std::vector<char> test6 = {'c', 'b', 'x', 'm', 'n'};

    algocpp::sorting::bubbleSort(test1);
    algocpp::sorting::bubbleSort(test2);
    algocpp::sorting::bubbleSort(test3);
    algocpp::sorting::bubbleSort(test4);
    algocpp::sorting::bubbleSort(test5);
    algocpp::sorting::bubbleSort(test6);

    REQUIRE(test1 == std::vector<int>{1, 2, 3, 4, 5});
    REQUIRE(test2 == std::vector<int>{1, 2, 2, 3, 5});
    REQUIRE(test3 == std::vector<int>{1, 1, 1, 1, 1});
    REQUIRE(test4 == std::vector<int>{1});
    REQUIRE(test5 == std::array<int, 5>{1, 2, 3, 4, 5});
    REQUIRE(test6 == std::vector<char>{'b', 'c', 'm', 'n', 'x'});
}
