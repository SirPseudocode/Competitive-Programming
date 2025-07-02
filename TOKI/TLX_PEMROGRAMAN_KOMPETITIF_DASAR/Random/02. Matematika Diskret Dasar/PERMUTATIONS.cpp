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

    ll n,k;
    cin >> n >> k;

    ll ans = 1;
    for(ll i = n ; i > k ; i--){
        ans*= i;
    }

    cout << ans << '\n';
    return 0;
}