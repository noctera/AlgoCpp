#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "AlgoCpp/Algorithms/Sorting/BubbleSort.hpp"
#include <catch2/catch.hpp>
#include <random>
#include <vector>


TEST_CASE("Benchmarking", "[bubbleSort]") {
    std::vector<int> test1 = {1, 4, 5, 2, 3};
    BENCHMARK("Bubble sort 5") {
        return algocpp::sorting::bubbleSort(test1);
    };


    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 1000000.0);

    std::vector<int> test2;
    for (int i = 1; i < 50000; ++i) {
        test2.push_back(int(dist(mt)));
    }

    BENCHMARK("Bubble sort 1000000") {
        return algocpp::sorting::bubbleSort(test2);
    };
}
