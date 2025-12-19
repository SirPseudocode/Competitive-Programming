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

void SelectionSort(ll h[], ll n){
    for(ll i = 0 ; i < n - 1 ; i++){
        ll min = i;
        for(ll j = i + 1 ; j < n ; j++){
            if(h[j] < h[min]){
                min = j;
            }
        }
        if(min != i)
        swap(h[i],h[min]);
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
    SelectionSort(arr,n);
    for(ll i = 0 ; i < n ; i++) cout << arr[i] << ' ';
    return 0;
}