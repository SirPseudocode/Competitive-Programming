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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, sd, sm, total =0;
    bool y = 1;
    pqueue <ll> pq;
    string s;
    cin >> s;

    cin >> n >>  sd >> sm;

    ll p[n+5], k[n+5], l[n+5];
    for(ll i = 0 ; i< n - 1 ; i++){
        cin >> p[i] >> k[i] >> l[i];
        total += k[i];
    }

    for(ll i = 0 ; i < n - 1; i++){
        while(sd < p[i]){
            if(pq.empty()){
                y = 0;
                break;
            }

            sd++;
            total -= pq.top();
            pq.pop();
        }

        if(l[i] <= k[i]){
            total -= (k[i] - l[i]);
            sd++;
        }else{
            pq.push(k[i] - l[i]);
        }
    }

    while(sd<sm){
        if(pq.empty()){
            y = 0;
            break;
        }

        sd++;
        total -= pq.top();
        pq.pop();
    }

    if(sd < sm || !y) cout << "-1\n";
    else cout << total << '\n';
    return 0;
}