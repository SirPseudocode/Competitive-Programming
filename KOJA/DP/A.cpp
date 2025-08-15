#include <bits/stdc++.h>
using namespace std;
const int mod = 1'000'000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> dp(3);
    dp[0] = dp[1] = dp[2] = 1;
    for(int i = 3 ; i <= n ; i++){
        dp[i % 3] = (dp[(i - 1) % 3] + dp[(i - 3) % 3]) % mod;
    }
    cout << dp[n % 3] << '\n';
    return 0;
}