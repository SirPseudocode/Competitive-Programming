#include <bits/stdc++.h>
using namespace std;

void solve(){
    short x;
    cin >> x;
    if(x % 2 == 0) cout << x / 2 << '\n';
    else cout << x  - 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}