#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO
    int i;
    int bin = 0;
    string s;
    cin >> s;
    int len = s.length();
    for (i = 0; i < len; i++) {
        if (s[i] == 'f') {
            bin++;
            if (bin == 2) {
                cout << i;
                return 0;
            }
        }
    }

    if (bin == 0) {
        cout << -2;
    }
    else if (bin == 1) {
        cout << -1;
    }
    return 0;
}
