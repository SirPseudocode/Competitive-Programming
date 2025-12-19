#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, c, ans = 0;
    cin >> n >> c;

    vector<int> arr(n);
    for(int &input : arr) cin >> input;
    sort(arr.begin(),arr.end());

    int l = 1, r = arr[n - 1] - arr[0];
    while(l <= r){
        int mid = (l + r) / 2;

        int cur = 1, last = 0;
        bool benar = 0;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] - arr[last] >= mid){
                cur++;
                last = i;
            }

            if(cur >= c){
                benar = 1;
                break;
            }
        }

        if(benar){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    } 
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}