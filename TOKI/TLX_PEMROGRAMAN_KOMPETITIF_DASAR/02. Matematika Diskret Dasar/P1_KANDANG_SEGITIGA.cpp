#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll c(ll a, ll b){
    if(b > a - b) b = a - b;
    ll res = 1;
    for(ll i = 1 ; i <= b ; i++){
        res *= a - i + 1;
        res /= i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, temp;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> temp >> temp;

    if(n < 3){
        cout << 0 << '\n';
        return 0;
    }

    ll ans = c(n,3);
    cout << ans << '\n';
    return 0;
}