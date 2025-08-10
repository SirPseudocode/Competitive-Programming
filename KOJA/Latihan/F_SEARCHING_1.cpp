#include <bits/stdc++.h>
using namespace std;

 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(auto &in : arr) cin >> in;

    int q;
    cin >> q;
    while(q--){
        int d;
        cin >> d;
        int l = 0, r = n - 1, mid;

        while(l < r){
            mid = (l+r) / 2;
            if(arr[mid] >= d) r = mid;
            else l = mid + 1;
        }
        if(arr[r] == d) cout << r << '\n';
        else cout << -1 << '\n';
    }
 }