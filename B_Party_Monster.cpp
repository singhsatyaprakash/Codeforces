#include <bits/stdc++.h>
using namespace std;

bool isValid(string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;

        if (balance < 0) return false;
    }
    return balance == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int open = count(s.begin(), s.end(), '(');
        int close = n - open;

        if (open != close) {
            cout << "NO\n";
            continue;
        }

        if (isValid(s)) {
            cout << "YES\n";
            continue;
        }

        bool hasBad = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == ')' && s[i + 1] == '(') {
                hasBad = true;
                break;
            }
        }

        if (hasBad) cout << "YES\n";
        else cout << "NO\n";
    }
}