#include <bits/stdc++.h>
#include <numeric>
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

v<ll> SieveofEratosthenos(ll lim){
    v<bool> eliminated(lim+1, 0);
    v<ll> isprime;
    eliminated[0] = eliminated[1] = 1;

    ll last = 2;
    for(ll i = 2 ; i * i <= lim ; i++){
        if(!eliminated[i]){
            isprime.pb(i);
            for(ll j = i * i ; j <= lim ; j += i)
            eliminated[j] = 1;
        }
        last = i + 1;
    }

    for(ll i = last ; i <= lim ; i++){
        if(!eliminated[i]) isprime.pb(i);
    }
    return isprime;
}

v<ll> SegmentedSieve(ll l, ll r){
    if(l == 1) l = 2;
    if(l > r) return {};
    
    v<ll> primes = SieveofEratosthenos(sqrt(r));
    v<bool> segsieve(r - l + 1, true);
    for(ll p : primes){
        ll start = max(2LL, (l + p - 1) / p );
        for(ll q = start ; q * p <= r ; q++){
            segsieve[p * q - l] = false;
        }
    }
    primes.clear();
    for(int i = 0 ; i < r - l + 1; i++){
        if(segsieve[i])
        primes.push_back(i+l);
    }
    return primes;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
}