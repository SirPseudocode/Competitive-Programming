#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n;
    cin >> n;
    if(400 % n == 0) cout << 400 / n << '\n';
    else cout << -1 << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}