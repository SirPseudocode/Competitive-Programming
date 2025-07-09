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

void RBinarySearch(ll left, ll right, ll arr[], ll key){
    if (left > right) {
        cout << -1 << '\n';
        return;
    }

    ll mid = left + (right - left) / 2;
    if (arr[mid] == key) {
        cout << mid << '\n';
    } else if (arr[mid] > key) {
        RBinarySearch(left, mid - 1, arr, key);
    } else {
        RBinarySearch(mid + 1, right, arr, key);
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, a;
    cin >> n >> a;
    ll arr[n+1];
    for(ll i = 1 ; i <= n ; i++) cin >> arr[i];

    RBinarySearch(1,n,arr,a);
}