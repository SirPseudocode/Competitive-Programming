#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r;
    cin >> l >> r;
    if(l == 1 && l == r) cout << 1 << '\n';
    else cout << r - l << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);    cin.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}