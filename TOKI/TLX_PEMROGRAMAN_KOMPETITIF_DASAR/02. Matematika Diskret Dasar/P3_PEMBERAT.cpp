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

    ll b,k;
    cin >> b >> k;

    ll s = k - b, best = 1;
    while(best < s) best *=2;
    while(s > 0 && best > 0){
        if(s - best >= 0){
            s -= best;
            cout << best << '\n';
        }

        best /= 2;
    }
    return 0;
}