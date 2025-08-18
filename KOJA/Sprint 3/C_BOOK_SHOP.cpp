#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> book(n);
    for(int i = 0 ; i < n ; i++){
        cin >> book[i].first;
    }
    for(int i = 0 ; i < n ; i++){
        cin >> book[i].second;
    }

    vector<int> dp(x + 1, 0);

    for(int i = 0 ; i < n ; i++){
        int harga = book[i].first;
        int halaman = book[i].second;

        for(int j = x ; j >= harga ; j--){
            dp[j] = max(dp[j], dp[j - harga] + halaman);
        }
    }

    int ans = *max_element(dp.begin(), dp.end());
    cout << ans << '\n';
}
