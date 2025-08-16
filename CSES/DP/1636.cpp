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
    for(const auto &c : coin){
        for(int i = c ; i <= x ; i++){
            dp[i] += dp[i - c];
            dp[i] %= MOD;
        }
    }
    cout << dp[x] << endl;
    return 0;
}