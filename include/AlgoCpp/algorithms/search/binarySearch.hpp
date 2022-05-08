#pragma once
#include <array>
#include <cmath>
#include <vector>

namespace algocpp::search {
template <typename T, typename Z>
int binarySearch(const T& input, const Z item)
{
    int maxIndex = input.size() - 1;

    // span the item must lie between
    std::array<int, 2> groupSpan { 0, maxIndex };
    int groupMid = 1;

    // check if searched item is first or last item
    if (input[0] == item) {
        return 0;
    } else if (input[maxIndex] == item) {
        return maxIndex;
    }
    // check if searched item lies between two consecutive items
    while (groupSpan[1] - groupSpan[0] > 1) {
        // calculate the item value which lies in span
        groupMid = (groupSpan.at(1) + groupSpan.at(0)) / 2;

        // return place in container
        if (input[groupMid] == item) {
            return groupMid;
        }

        // if item is bigger then the mid of the span, it lies in the right half
        if (input[groupMid] < item) {
            groupSpan.at(0) = groupMid;
        } else {
            // if item is smaller then the mid of the span, it lies in the left
            // half
            groupSpan.at(1) = groupMid;
        }
    }
    // if item is not existing, return -1
    return -1;
}
} // namespace algocpp::search