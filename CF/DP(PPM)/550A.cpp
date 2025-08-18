#include <bits/stdc++.h>
using namespace std;

bool hasPair(string s, string first, string second) {
    int n = s.size();
    for (int i = 0; i + 1 < n; ++i) {
        if (s[i] == first[0] && s[i + 1] == first[1]) {
            for (int j = i + 2; j + 1 < n; ++j) {
                if (s[j] == second[0] && s[j + 1] == second[1]) return true;
            }
            break;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string s;
    cin >> s;
    if (hasPair(s, "AB", "BA") || hasPair(s, "BA", "AB")) cout << "YES\n";
    else cout << "NO\n";
}
