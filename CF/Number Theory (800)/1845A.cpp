#include<bits/stdc++.h>
using namespace std;

void solve(){
    short n,k,x;
    cin >> n >> k >> x;

    if(x != 1){
        cout <<"YES\n" << n << '\n';
        while(n--) cout << 1 << ' ';
    }else if(k == 1 || (k == 2 & n % 2 == 1)) cout << "NO\n";
    else{
        cout << "YES\n" << n / 2 << '\n';
        if(n % 2 == 1){
            cout << 3 << ' ';
            int lim = n / 2 - 1;
            while(lim--) cout << 2 << ' ';
        }else{
            int lim = n / 2;
            while(lim--) cout << 2 << ' ';
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;   
}