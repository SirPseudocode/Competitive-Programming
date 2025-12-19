#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n,k;
    cin >> n >> k;
    int in;
    unsigned long long p = 1;
    while(n--){
        cin >> in;
        p *= in;
    }
    if(p == 2023){
        cout << "YES\n";
        while(k--) cout << 1 << ' ';
        cout << '\n';
    }else if(2023 % p == 0){
        k--;
        cout << "YES\n";
        cout << 2023 / p << ' ';
        while(k--) cout << 1 << ' ';
        cout << '\n';
    }else cout << "NO\n";
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