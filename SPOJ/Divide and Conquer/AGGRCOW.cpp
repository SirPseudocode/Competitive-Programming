#include <bits/stdc++.h>
using namespace std;

bool valid(int x){

}

void solve(){
    int n, c, ans = 0;
    cin >> n >> c;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    sort(arr, arr + n);

    int l = 0 , r = arr[n - 1] - arr[0];
    while(l <= r){
        int mid = (l + r) / 2;
        
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}