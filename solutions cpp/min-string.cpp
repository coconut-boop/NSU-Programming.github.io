#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string min_str = s1;
    if (s2 < min_str) min_str = s2;
    if (s3 < min_str) min_str = s3;
    cout << min_str;
    return 0;
}
