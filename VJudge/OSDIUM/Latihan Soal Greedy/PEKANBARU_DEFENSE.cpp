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

    string s;
    cin >> s;

    int n, sd, sm;
    cin >> n >> sd >> sm;
    
    n--;

    int p, k, l, ans = 0;
    while(n--){
        cin >> p >> k >> l;
        if(p > sd){
            cout << "-1\n";
            return 0;
        }

        ans += min(k,l);
        sd++;
    }

    if(sd >= sm){
        cout << ans << '\n';
    }else{
        cout << "-1\n";
    }
    return 0;
}