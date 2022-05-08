#pragma once

namespace algocpp {
namespace search {

    template <typename T, typename Z>
    bool
    linearSearch(const T& input, const Z item)
    {
        for (auto it = input.begin(); it != input.end(); ++it) {
            if (*it == item) {
                return true;
            }
        }
        return false;
    }
} // namespace search
} // namespace algocpp