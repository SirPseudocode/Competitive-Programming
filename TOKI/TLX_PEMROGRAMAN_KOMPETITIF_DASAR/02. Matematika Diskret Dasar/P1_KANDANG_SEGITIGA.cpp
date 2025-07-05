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

void preComputeCombination(int n, v<v<int>> &c){
    c.resize(n + 1, v<int> (n + 1 , 0));

    for(int i = 0 ; i <= n ; i++){
        c[i][0] = c[i][i] = 1;
        if(i > 1){
            int limit;
            if(i % 2 == 0){
                limit = i / 2;
            }else{
                limit = (i + 1)/2;
            }

            for(int j = 1; j <= limit ; j++){
                c[i][j] = c[i-1][j] + c[i-1][j-1];
                c[i][i-j] = c[i][j];
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;

    
    int temp;
    for(int i = 0 ; i < 2 * n ; i++){
        cin >> temp;
    }
    
    if(n < 3){
        cout << 0 << '\n';
        return 0;
    }


    v<v<int>> ans;
    preComputeCombination(n, ans);

    cout << ans[n][3] << '\n';
    return 0;
}