#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int &x : arr) cin >> x;

    int maxVal = *max_element(arr.begin(), arr.end());
    vector<long long> freq(maxVal + 1, 0);
    for (int x : arr) freq[x]++;
    for (int i = 0; i <= maxVal; i++) freq[i] *= i;

    if (maxVal == 0) {
        cout << freq[0] << '\n';
        return 0;
    }

    long long prev2 = freq[0];
    long long prev1 = freq[1];
    for (int i = 2; i <= maxVal; i++) {
        long long curr = max(prev1, prev2 + freq[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << '\n';
    return 0;
}
