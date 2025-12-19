#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<long long> arr(n + 1);
    arr[0] = 0;
    for(int i = 2 ; i <= n ; i++){
        string s;
        cin >> s;
        if(s == "Patrik"){
            int t;
            cin >> t;
            arr[i] = t;
        }else{
            int x, t;
            cin >> x >> t;
            arr[i] = arr[x] + t;
        }
    }

    long long mn = 1'000'000'000;
    int idx;
    for(int i = 2 ; i <= n ; i++){
        if(mn > arr[i] - arr[i - 1]){
            idx = i;
            mn = arr[i] - arr[i-1];
        }
    }
    cout << mn << ' ' << idx - 1 << ' ' << idx << endl;
    return 0;
}