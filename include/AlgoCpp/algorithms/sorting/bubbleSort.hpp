#pragma once

#include <algorithm>

namespace algocpp {
  namespace sorting {

    template <typename T> void bubbleSort(T& input) {
      // no sorting required
      if (input.size() <= 1) {
        return;
      }
      // count if changes were made in an iteration to indicate if everything is in right order
      int changesPerIteration = 0;
      while (true) {
        for (auto it = input.begin(); it != input.end() - 1; ++it) {
          if (*it > *std::next(it)) {
            std::iter_swap(it, std::next(it));
            ++changesPerIteration;
          }
        }
        if (changesPerIteration == 0) {
          break;
        }
        changesPerIteration = 0;
      }
    }

  }  // namespace sorting
}  // namespace algocpp