#include<bits/stdc++.h>
using namespace std;

void solve(){
    short n,m,k;
    cin >> n >> m >> k;
    if(m == 0) cout << 0 << '\n';
    else{
        short hand = n / k;
        if(hand > m) cout << m << '\n';
        else{
            k--;
            m -= hand;
            cout << hand - (m + k - 1) / k << '\n';
        }
    }
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