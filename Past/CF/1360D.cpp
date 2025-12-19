#include <bits/stdc++.h>
using namespace std;

int binser(vector<int> &arr, int x){
    int l = 0, r = arr.size() - 1, ans = -1;
    while(l <= r){  
        int mid = (l + r) / 2;
        if(arr[mid] <= x){
            ans = mid;       
            l = mid + 1;     
        }else{
            r = mid - 1;
        }
    }
    return ans;
}

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> f;
    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            f.push_back(i);
            if((n / i) <= k){       
                cout << i << endl;
                return;
            }
        }
    }

    cout << n / f[binser(f, k)] << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}