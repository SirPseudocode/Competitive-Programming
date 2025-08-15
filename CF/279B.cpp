#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int& k : a)
        cin >> k;

    int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sm + a[r] <= t) {
            sm += a[r];
            ++r;
        }
        ans = max(ans, r - i);
        sm -= a[i];
    }

    cout << ans << '\n';
    return 0;
}