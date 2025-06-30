#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll m,n;
    cin >> m >> n;

    if(n >= m){
        cout << 0 << '\n';
        return 0;
    }

    ll ans = 1;
    for(ll i = 1 ; i <= n ; i++){
        ans = (ans % m) * (i % m) % m;
    }

    cout << ans << '\n';
    return 0;
}   