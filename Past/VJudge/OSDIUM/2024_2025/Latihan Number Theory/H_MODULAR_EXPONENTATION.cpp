#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define fi first
#define se second
#define pb push_back
#define pqueue priority_queue
using namespace std;
const int mod = 1e9 + 7;

ll ans(ll n){
    if(n >= 32) return LLONG_MAX;

    ll result = 1;
    for(ll i = 0 ; i < n ; i++){
        if(result > LLONG_MAX / 2) return LLONG_MAX;
        result *=2;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    ll temp = ans(n);
    if(temp == LLONG_MAX) cout << m << '\n';
    else cout << m % temp << '\n';
    
    return 0;
}