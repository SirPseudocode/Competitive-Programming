#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    s = '*' + s;

    int m, n = s.size();
    cin >> m;
    vector<int> dp(n);
    dp[1] = 0;
    for(int i = 2 ; i < n ; i++){
        dp[i] = dp[i - 1];
        if(s[i] == s[i - 1]) dp[i]++;
    }

    while(m--){
        int l, r;
        cin >> l >> r;
        cout << dp[r] - dp[l] << '\n';
    }
    return 0;
}

/*
123456
......
012345
4
3 4
2 3
1 6
2 6

1
1
5
4

123456
#..###
001123
5
1 3
5 6
1 5
3 6
3 4

1
1
2
2
0

*/