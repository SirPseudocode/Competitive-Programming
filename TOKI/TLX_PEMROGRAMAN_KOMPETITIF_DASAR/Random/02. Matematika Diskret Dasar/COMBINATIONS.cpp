#include <bits/stdc++.h>
using namespace std;

long long C(long long n, long long k) {
    if (k > n - k) k = n - k;
    long long res = 1;
    for (long long i = 1; i <= k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main() {
    long long n, k;
    cin >> n >> k;
    cout << C(n, k) << '\n';
    return 0;
}
