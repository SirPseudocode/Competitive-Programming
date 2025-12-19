#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& arr) {
    int lim = arr.size();
    for (int i = 1; i < lim; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int l = 0, r = n - 1;

    // Cari batas kiri
    while (l < n - 1 && arr[l] <= arr[l + 1]) l++;
    // Cari batas kanan
    while (r > 0 && arr[r] >= arr[r - 1]) r--;

    if (isSorted(arr)) {
        cout << "yes\n1 1\n";
        return 0;
    }

    reverse(arr.begin() + l, arr.begin() + r + 1);
    if (isSorted(arr)) {
        cout << "yes\n" << l + 1 << ' ' << r + 1 << '\n';
    } else {
        cout << "no\n";
    }

    return 0;
}
