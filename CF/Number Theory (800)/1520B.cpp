#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int res = 0;
    
    for(int i = 1; i <= 9; i++){
        long long ordinary = 0;
        
        while(true){
            ordinary = ordinary * 10 + i;
            if(ordinary > n) break;
            res++;
        
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}