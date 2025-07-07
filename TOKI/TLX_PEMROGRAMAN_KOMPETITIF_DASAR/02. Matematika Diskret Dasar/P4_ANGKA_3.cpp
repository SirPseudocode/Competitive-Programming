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

    ll num, base;
    cin >> num >> base;

    string ans = "";
    while(num >= base){
        ans = to_string(num % base) + ans;
        num /= base;
    }

    ans = to_string(num % base) + ans;
    cout << ans << '\n';
    return 0;
}