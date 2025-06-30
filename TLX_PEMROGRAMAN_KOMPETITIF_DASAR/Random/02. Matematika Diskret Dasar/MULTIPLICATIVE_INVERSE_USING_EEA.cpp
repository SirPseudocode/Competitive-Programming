#include <bits/stdc++.h>
using namespace std;

// Extended Euclidean Algorithm
int mod_inverse(int n, int m) {
    int a = n, b = m;
    int t1 = 0, t2 = 1;

    while (b != 0) {
        int q = a / b;
        int r = a % b;
        int t = t1 - t2 * q;

        a = b;
        b = r;
        t1 = t2;
        t2 = t;
    }

    if (a != 1) return -1;

    return (t1 % m + m) % m;
}

int main() {
    int n, m;
    cin >> n >> m;

    int inv = mod_inverse(n, m);
    if (inv == -1) {
        cout << "Tidak ada invers\n";
    } else {
        cout << inv << '\n';
    }
    return 0;
}
