#include <AlgoCpp/algorithms.hpp>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> foo { 1, 4, 5, 2, 3 };
    if (algocpp::search::linearSearch(foo, 2)) {
        std::cout << "found" << std::endl;
    }
}