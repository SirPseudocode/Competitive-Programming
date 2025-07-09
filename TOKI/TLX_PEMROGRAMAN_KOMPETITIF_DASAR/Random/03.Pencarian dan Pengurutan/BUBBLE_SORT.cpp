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

ll n;

void BubbleSort(ll h[]){
    for(ll i  = 0 ; i < n ; i++){
        for(ll j = 0 ; j < n ; j++){
            if(h[j] > h[j+1]){
                swap(h[j], h[j + 1]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    ll arr[n];
    for(ll i= 0 ; i < n ; i++){
        cin >> arr[i];
    }

    BubbleSort(arr);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}