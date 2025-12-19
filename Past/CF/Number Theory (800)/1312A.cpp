#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n, m;
    cin >> n >> m;

    if(n % m == 0) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}