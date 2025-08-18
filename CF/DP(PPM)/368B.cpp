#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
bitset<MAX> seen;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n), dp(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    int cnt = 0;
    for(int i = n - 1; i >= 0; --i){
        if(!seen[arr[i]]) {
            seen[arr[i]] = 1;
            ++cnt;
        }
        dp[i] = cnt;
    }

    while(m--){
        int l;
        cin >> l;
        cout << dp[l - 1] << '\n';
    }
}


/*
10 10

0 1 2 3 4 5 6 7   8     9
1 2 3 4 5 6 7 8   9     10
1 2 3 4 1 2 3 4 100000 99999
6 6 6 6 6 5 4 3   2      1

99999 100000 4 3 2 1

1   6
2   6
3   6
4   6
5   6
6   5
7   4
8   3
9   2
10  1




*/