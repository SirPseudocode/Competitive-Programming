#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define f first
#define s second
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;

void precomputeCombination(int N, vector<vector<int>>& C) {
    C.resize(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 0; i <= N; i++) {
        C[i][0] = 1;
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
        }
        C[i][i] = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a,b;
    cin >> n >> a >> b;

    v<v<int>> c;
    precomputeCombination(n,c);
    ll ans = 0;
    for(int i = a ; i <= b ; i++){
        ans = (ans % mod + (c[n][i] % mod)) % mod;
    }

    cout << ans << '\n';
    return 0;
}