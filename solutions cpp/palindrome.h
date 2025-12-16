#include <string>
#include <cctype>

bool IsPalindrome(const std::string& s) {
    std::string cleaned;
    for (char c : s) {
        if (!std::isspace(c)) {
            cleaned += std::tolower(c);
        }
    }
    std::string rev = cleaned;
    std::reverse(rev.begin(), rev.end());
    return cleaned == rev;
}
