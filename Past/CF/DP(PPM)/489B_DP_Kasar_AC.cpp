#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n, m;
    cin >> n;
    vector<short> b(n);
    for (auto &x : b) cin >> x;

    cin >> m;
    vector<short> g(m);
    for (auto &x : g) cin >> x;

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (abs(b[i - 1] - g[j - 1]) <= 1)
                dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n][m] << '\n';
}
