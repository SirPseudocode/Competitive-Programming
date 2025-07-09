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

void InsertionSort(ll arr[], ll n){
    for(ll i = 1 ; i < n ; i++){
        ll pos = i;
        while(pos > 0 && arr[pos] > arr[pos-1]){
            swap(arr[pos] , arr[pos - 1]);
            pos--;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++) cin >> arr[i];
    InsertionSort(arr , n);
    for(ll i = 0 ; i < n ; i++) cout << arr[i] << ' ';
    return 0;
}