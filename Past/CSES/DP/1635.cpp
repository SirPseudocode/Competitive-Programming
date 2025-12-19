#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> coin(n);
    for(auto &c : coin) cin >> c;

    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 1 ; i <= x ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i >= coin[j]){
                dp[i] = (dp[i] + dp[i - coin[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}   