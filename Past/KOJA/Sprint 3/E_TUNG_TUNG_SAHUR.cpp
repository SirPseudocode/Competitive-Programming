#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    int p_ptr = 0, s_ptr = 0;
    int pmax = p.size(), smax = s.size();

    while (p_ptr < pmax && s_ptr < smax) {
        char cp = p[p_ptr];
        char cs = s[s_ptr];

        if (cp != cs) {
            cout << "NO\n";
            return;
        }

        int cntp = 0;
        while (p_ptr < pmax && p[p_ptr] == cp) {
            cntp++;
            p_ptr++;
        }

        int cnts = 0;
        while (s_ptr < smax && s[s_ptr] == cs) {
            cnts++;
            s_ptr++;
        }

        if (cntp > (cnts + 1) / 2) {
            cout << "NO\n";
            return;
        }
    }

    if (p_ptr != pmax || s_ptr != smax) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
