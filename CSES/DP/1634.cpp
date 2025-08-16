#include <bits/stdc++.h>
using namespace std;
const int INF = 1'000'000'000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> coin(n);
    for(auto &c : coin) cin >> c;

    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for(int i = 1 ; i <= x ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i >= coin[j]){
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
            }
        }
    }

    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
    return 0;
}
