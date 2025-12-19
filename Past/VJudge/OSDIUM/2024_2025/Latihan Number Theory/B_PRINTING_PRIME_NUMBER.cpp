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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const int limit = 1e8;

    v<bool> eliminated(limit, false);
    v<ull> isprime;

    eliminated[0] = eliminated[1] = true;

    for(ull i = 2; i * i < limit ; i++){
        if(!eliminated[i]){
            for(ull j = i * i; j < limit; j += i){
                eliminated[j] = true;
            }
        }
    }

    for(ull i = 2 ; i < limit ; i++){
        if(!eliminated[i]){
            isprime.pb(i);
        }
    }

    for(ull i = 0 ; i < isprime.size() ; i += 100){
        cout << isprime[i] << '\n';
    }

    return 0;
}
