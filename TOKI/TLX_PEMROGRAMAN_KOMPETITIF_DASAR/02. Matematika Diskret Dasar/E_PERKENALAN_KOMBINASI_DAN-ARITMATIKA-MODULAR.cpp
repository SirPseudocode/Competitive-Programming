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

ll C(ll n, ll k){
    if (k > n - k) k = n - k;
    long long res = 1;
    for (long long i = 1; i <= k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, a, b, ans = 0;
    cin >> n >> a >> b;
    for(ll i = a ; i <= b ; i++){
        ans += C(n,i) % mod;
    }
    cout << ans % mod << '\n';
    return 0;
}