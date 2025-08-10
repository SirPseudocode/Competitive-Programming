#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long a1, ans = 0, in;
    cin >> n >> m >> a1;

    n--;
    while(n--){
        cin >> in;
        ans = __gcd(ans, abs(in - a1));
    }

    while(m--){
        cin >> in;
        cout << __gcd(ans, abs(in+a1)) << '\n';
    }
    return 0;
}