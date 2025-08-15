#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> dp(6, 0);
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        int res = dp[(i - 1) % 6] % mod;

        if(i >= 2) res = (res + dp[(i - 2) % 6]) % mod;
        if(i >= 3) res = (res + dp[(i - 3) % 6]) % mod;
        if(i >= 4) res = (res + dp[(i - 4) % 6]) % mod;
        if(i >= 5) res = (res + dp[(i - 5) % 6]) % mod;
        if(i >= 6) res = (res + dp[(i - 6) % 6]) % mod;

        dp[i % 6] = res;
    }
    cout << dp[n % 6] << '\n';
    return 0;
}