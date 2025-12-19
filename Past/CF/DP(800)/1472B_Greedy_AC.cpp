#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, cnt1 = 0, cnt2 = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x == 1) cnt1++;
            else cnt2++;
        }
        int total = cnt1 + 2 * cnt2;
        if (total % 2 != 0) {
            cout << "NO\n";
        } else {
            if (cnt1 == 0 && cnt2 % 2 != 0) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}
