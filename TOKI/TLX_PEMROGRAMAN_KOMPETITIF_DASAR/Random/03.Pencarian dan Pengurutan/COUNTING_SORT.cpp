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

void CountingSort(ll arr[], ll n){
    ll max = arr[0];
    for(ll i = 1 ; i < n ; i++){
        if(max < arr[i]) max = arr[i];
    }

    ll ftable[max + 1] = {};

    for(ll i = 0 ; i < n ; i++){
        ll pos = arr[i];
        ftable[pos]++;
    }

    ll index = 0;
    for(ll i = 0 ; i <= max ; i++){
        for(ll j = 0 ; j < ftable[i] ; j++){
            arr[index] = i;
            index++;
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
    CountingSort(arr, n);
    for(ll i = 0 ; i < n ; i++) cout << arr[i] << ' ';
    return 0;
}