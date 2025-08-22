#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long sum = 0;
    vector<int> arr(n);
    for(auto &x : arr){
        cin >> x;
        sum += x;
    }

    if (sum % 3 != 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long part = sum / 3;
    long long twoPart = 2 * part;

    long long prefix = 0;
    long long cnt = 0, ways = 0;

    for (int i = 0; i < n - 1; i++) {
        prefix += arr[i];

        if (prefix == twoPart) {
            ways += cnt;
        }
        if (prefix == part) {
            cnt++;
        }
    }

    cout << ways << endl;
}
