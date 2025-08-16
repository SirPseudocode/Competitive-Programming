#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> b(n);
    for (int &x : b) cin >> x;

    cin >> m;
    vector<int> g(m);
    for (int &x : g) cin >> x;

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    int i = 0, j = 0, ans = 0;
    while (i < n && j < m) {
        if (abs(b[i] - g[j]) <= 1) {
            ans++;
            i++; j++;
        } else if (b[i] < g[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << ans << '\n';
}
