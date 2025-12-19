#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define f first
#define s second
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll b,c,d;
    cin >> b >> c >> d;

    if(b <= d){
        cout << 0 << '\n';
        return 0;
    }

    if(c == d && b - c >= 0){
        cout << b - c << '\n';
        return 0;
    }

    ll ans = 0;
    c -= d;
    for(ll i = 1; i * i <= c ; i++){
        if(c % i == 0){
            if(i <= b && i > d) ans++;
            if(i * i != c && (c / i) <= b && (c / i) > d) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}