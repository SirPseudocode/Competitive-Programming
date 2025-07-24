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

ll reverse(ll n){
    string str = to_string(n);
    reverse(str.begin(), str.end());
    return stoll(str);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    while(n--){
        ll a,b;
        cin >> a >> b;
        a = reverse(a);
        b = reverse(b);
        ll c = a + b;
        c = reverse(c);
        cout << c << '\n';
    }
}