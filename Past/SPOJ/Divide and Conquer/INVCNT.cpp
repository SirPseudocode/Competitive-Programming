#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr, temp;

long long count(int l, int r){
    int mid = (l + r) / 2;
    long long inv = 0;

    int i = l, j = mid + 1, k = l; 
    
    while(i <= mid && j <= r){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (mid - i + 1);
        }
    }
    
    while(i <= mid) temp[k++] = arr[i++];
    while(j <= r) temp[k++] = arr[j++];
    
    for(int i = l; i <= r; i++){
        arr[i] = temp[i];
    }
    
    return inv;
}

long long ans(int l, int r){
    if(l == r) return 0;
    int mid = (l + r) / 2;
    
    return ans(l, mid) + ans(mid + 1, r) + count(l, r);
}

void solve(){
    arr.clear();
    cin >> n;

    arr.resize(n);
    temp.resize(n);
    for(int &in : arr) cin >> in;

    cout << ans(0, n - 1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}