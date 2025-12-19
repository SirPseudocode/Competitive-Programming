#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n, m, k;
    cin >> n >> m >> k;

    n -= ((n + m - 1) / m);
    if(k >= n) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}