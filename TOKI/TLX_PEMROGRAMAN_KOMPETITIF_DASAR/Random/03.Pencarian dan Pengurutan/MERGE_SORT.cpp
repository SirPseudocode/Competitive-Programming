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

void Merge(ll arr[], ll left, ll mid, ll right){
    ll n1 = mid - left + 1;
    ll n2 = right - mid;

    ll leftarr[n1], rightarr[n2];

    for(ll i = 0; i < n1; i++){
        leftarr[i] = arr[left + i];
    }
    for(ll j = 0; j < n2; j++){
        rightarr[j] = arr[mid + j + 1];
    }

    ll i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(leftarr[i] <= rightarr[j]){
            arr[k++] = leftarr[i++];
        }else{
            arr[k++] = rightarr[j++];
        }
    }

    while(i < n1){
        arr[k++] = leftarr[i++];
    }

    while(j < n2){
        arr[k++] = rightarr[j++];
    }
}

void MergeSort(ll arr[], ll left, ll right){
    if(left < right){
        ll mid = (right - left) / 2 + left;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    
    MergeSort(arr, 0, n - 1);
    
    for(ll i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}