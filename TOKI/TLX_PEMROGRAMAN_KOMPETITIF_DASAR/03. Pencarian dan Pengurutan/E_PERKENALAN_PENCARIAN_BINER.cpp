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

ll lower_bound_search(ll arr[], ll n, ll x){
    ll left = 0, right = n;
    while(left < right){
        ll mid = (left + right) / 2;
        if(arr[mid] >= x){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
}

ll upper_bound_search(ll arr[], ll n, ll y){
    ll left = 0, right = n;
    while(left < right){
        ll mid = (left + right) / 2;
        if(arr[mid] > y){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    ll q;
    cin >> q;

    while(q--){
        ll x, y;
        cin >> x >> y;

        ll left_idx = lower_bound_search(arr, n, x);
        ll right_idx = upper_bound_search(arr, n, y);
        
        cout << right_idx - left_idx << '\n';
    }
    
    return 0;
}