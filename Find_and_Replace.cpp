#include <iostream>
#include <string>
using namespace std;

bool is_alternating(string s) {
    // check if the string s is an alternating binary string
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    // loop through all possible characters in the string
    for (char c = 'a'; c <= 'z'; c++) {
        string t = s;
        // replace all occurrences of c with 0
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == c) {
                t[i] = '0';
            }
        }
        // check if the resulting string is alternating
        if (is_alternating(t)) {
            cout << "YES" << endl;
            return 0;
        }

        // replace all occurrences of c with 1
        t = s;
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == c) {
                t[i] = '1';
            }
        }
        // check if the resulting string is alternating
        if (is_alternating(t)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

