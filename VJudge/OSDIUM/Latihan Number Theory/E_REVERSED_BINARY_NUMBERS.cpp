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

    ll n;
    cin >> n;
    string bin = "";
    while (n != 0){
        if(n % 2 == 0) bin += '0';
        else bin += '1';
        n /= 2;
    }
    ll ans = 0, lim = bin.size() - 1, temp = 1;
    for(ll i = lim ; i >= 0 ; i--){
        if(bin[i] == '1') ans += temp;
        temp *= 2;
    }
    cout << ans << '\n';
    return 0;
}