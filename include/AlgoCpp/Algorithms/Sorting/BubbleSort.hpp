#pragma once

#include <vector>

namespace algocpp {
namespace sorting {

template <typename T>
void bubbleSort(T& input) {
    // no sorting required
    if (input.size() <= 1) {
        return;
    }
    // count if changes were made in an iteration to indicate if everything is in right order
    int changesPerIteration = 0;
    while (true) {
        for (int i = 0; i < input.size(); ++i) {
            if (input[i] > input[i + 1]) {
                std::swap(input[i], input[i + 1]);
                ++changesPerIteration;
            }
        }
        if (changesPerIteration == 0) {
            break;
        }
        changesPerIteration = 0;
    }
}

} // namespace sorting
} // namespace algocpp