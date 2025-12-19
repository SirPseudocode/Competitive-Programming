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

    ll n,x;
    cin >> n >> x;

    ll temp, ans;
    cin >> ans;
    n--;

    while(n--){
        cin >> temp;
        if(abs(x - ans) > abs(x - temp)){
            ans = temp;
        }

        if(abs(x - ans) == abs (x - temp)){
            if(temp < ans){
                ans = temp;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}