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
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll> data;
    ll n;
    
    while(cin >> n) {
        data.push_back(n);
    }
    
    ll ans = 0;
    ll puncak = data[0], lembah = data[0];
    bool naik = false;
    
    for(int i = 1; i < data.size(); i++) {
        if(data[i] > data[i-1]) {
            naik = true;
            break;
        } else if(data[i] < data[i-1]) {
            naik = false;
            break;
        }
    }
    
    for(int i = 1; i < data.size(); i++) {
        if(naik) {
            if(data[i] > data[i-1]) {
                puncak = data[i];
            } else if(data[i] < data[i-1]) {
                ans = max(ans, puncak - lembah);
                naik = false;
                lembah = data[i];
            }
        } else {
            if(data[i] < data[i-1]) {
                lembah = data[i];
            } else if(data[i] > data[i-1]) {
                ans = max(ans, puncak - lembah);
                naik = true;
                puncak = data[i];
            }
        }
    }
    
    ans = max(ans, puncak - lembah);
    
    cout << ans << '\n';
    return 0;
}