#pragma once

#include <string>
#include <cctype>

std::string accum(std::string s) {
    std::string result;
    for (size_t i = 0; i < s.length(); ++i) {
        char upper = std::toupper(s[i]);
        char lower = std::tolower(s[i]);
        std::string part(1, upper);
        for (size_t j = 0; j < i; ++j) {
            part += lower;
        }
        if (i > 0) {
            result += "-";
        }
        result += part;
    }
    return result;
}
