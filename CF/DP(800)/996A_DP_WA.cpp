#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for(int i = 1; i <= n ; i++){
        for(int c : {1,5,10,20,100}){
            if(i >= c) dp[i] = min(dp[i], 1 + dp[i - c]);
        }
    }
    cout << dp[n] << '\n';
    return 0;
}