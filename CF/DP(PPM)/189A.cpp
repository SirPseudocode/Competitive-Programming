    #include <bits/stdc++.h>
    using namespace std;
    const int INF = 1e9;

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        short n, a, b, c;
        cin >> n >> a >> b >> c;

        vector<int> dp(n + 1, -INF);
        dp[0] = 0;
        for(short i = 1 ; i <= n ; i++){
            if(i >= a) dp[i] = max(dp[i], 1 + dp[i - a]);
            if(i >= b) dp[i] = max(dp[i], 1 + dp[i - b]);
            if(i >= c) dp[i] = max(dp[i], 1 + dp[i - c]);
        }
        cout << dp[n] << '\n';
        return 0;
    }
