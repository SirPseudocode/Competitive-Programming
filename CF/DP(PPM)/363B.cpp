#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> tinggi(n);
    for(auto &t : tinggi) cin >> t;

    int sum = 0;
    for(int i = 0 ; i < k ; i++) sum += tinggi[i];

    int res = 0, best = sum;
    for(int i = k ; i < n ; i++){
        sum += tinggi[i] - tinggi[i - k];
        if(sum < best){
            res = i - k + 1;
            best = sum;
        }
    }
    cout << res + 1 << '\n';
    return 0;
}