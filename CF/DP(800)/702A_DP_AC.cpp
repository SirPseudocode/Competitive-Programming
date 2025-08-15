#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int st, nd;
    cin >> st;
    vector<int> dp(3);
    dp[0] = 1;
    for(int i = 1 ; i < n ; i++){
        cin >> nd;
        if(nd > st) dp[i & 1] = dp[(i - 1) & 1] + 1;
        else dp[i & 1] = 1;
        st = nd;
        dp[2] = *max_element(dp.begin(), dp.end());
    }
    if(n == 1) cout << 1 << '\n';
    else cout << dp[2] << '\n';
    return 0;
}