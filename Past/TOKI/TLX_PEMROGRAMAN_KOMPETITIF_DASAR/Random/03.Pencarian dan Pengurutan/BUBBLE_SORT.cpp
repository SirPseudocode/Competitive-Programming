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

void BubbleSort(ll arr[], ll n){
    for(ll i = 0 ; i < n - 1 ; i++){
        bool sorted = 1;
        for(ll j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = 0;
            }
        }
        if(sorted) break;
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
    BubbleSort(arr, n);
    for(ll i = 0 ; i < n ; i++) cout << arr[i] << ' ';
    return 0;
}