#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, l;
    cin >> n >> l;

    vector<int> arr(n);
    for(int &in : arr) cin >> in;

    sort(arr.begin(), arr.end());
    double d = arr[0];
    for(int i = 1 ; i < n ; i++){
        d = max(d , (arr[i] - arr[i-1])/ 2.0);
    }
    
    d = max(d, double(l - arr.back()));
    cout << setprecision(10) << fixed  << d << '\n';
    return 0;
}