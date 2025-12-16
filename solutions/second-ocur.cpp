#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO
    int i;
    int bin = 0;  // Инициализируем переменную
    string s;
    cin >> s;
    int len = s.length();
    for (i = 0; i < len; i++) {
        if (s[i] == 'f') {
            bin++;
            if (bin == 2) {
                cout << i << endl;
                return 0;
            }
        }
    }
    // Если цикл завершился без нахождения второго 'f'
    if (bin == 0) {
        cout << -2 << endl;
    }
    else if (bin == 1) {
        cout << -1 << endl;
    }
    return 0;
}
