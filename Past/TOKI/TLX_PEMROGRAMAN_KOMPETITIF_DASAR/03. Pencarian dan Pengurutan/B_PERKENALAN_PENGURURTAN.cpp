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

    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n ; i++) cin >> arr[i];

    sort(arr, arr+n);

    if(n % 2 == 0){
        double ans = arr[n/2] / 2.0 + arr[(n/2-1)] / 2.0;
        cout << fixed << setprecision(1) << ans << '\n';
    }else{
        cout << fixed << setprecision(1) << (double) arr[n/2] << '\n';
    }
    return 0;
}