#include <bits/stdc++.h>
using namespace std;

void solve(){
    short x, y;
    cin >> x >> y;
    if(x >= y) cout << 0 << '\n';
    else{
        y -= x;
        cout << (y + 9) / 10 << '\n';
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}