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

    int n, m;
    cin >> n >> m;
    vector<int> bebek(n);
    for(int i = 0 ; i < n ; i++) cin >> bebek[i];
    sort(bebek.begin(), bebek.end());

    mset<int> sepatu;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        sepatu.insert(x);
    }

    int ans = 0;
    for(int x : bebek){
        auto it = sepatu.lower_bound(x);
        if(it == sepatu.end() || *it > x + 1) continue;
        sepatu.erase(it);
        ans++;
    }

    cout << ans << '\n';
    return 0;
}