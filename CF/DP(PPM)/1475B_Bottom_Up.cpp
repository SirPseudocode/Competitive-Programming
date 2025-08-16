#include <bits/stdc++.h>
using namespace std;

vector<bool> dp(1e6 + 23, 0);

void precompute(){
    dp[0] = 1;
    for(int i = 1 ; i <= 1'000'000 ; i++){
        if(i >= 2021 && dp[i - 2021]) dp[i] = 1;
        if(i >= 2020 && dp[i - 2020]) dp[i] = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    precompute();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(dp[n]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}