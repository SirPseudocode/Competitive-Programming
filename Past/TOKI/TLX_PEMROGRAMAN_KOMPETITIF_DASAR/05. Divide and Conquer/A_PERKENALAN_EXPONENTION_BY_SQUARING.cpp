#include <bits/stdc++.h>
#define mod 1000000
using namespace std;

bool overflow_flag = 0;

int power(int x, int y){
    if(y == 0) return 1;
    
    if(x >= mod) {
        overflow_flag = true;
    }
    
    if(y == 1) return x % mod;
    
    int temp = power(x, y/2);
    long long result = 1LL * temp * temp;
    
    if(result >= mod) {
        overflow_flag = true;
    }
    
    temp = result % mod;
    
    if(y % 2 == 0) return temp;
    
    result = 1LL * temp * (x % mod);
    
    if(result >= mod) {
        overflow_flag = true;
    }
    
    return result % mod;
}

void solve(){
    int a, b;
    cin >> a >> b;
    string ans = to_string(power(a,b));
    while(overflow_flag && ans.size() < 6) ans = '0' + ans;
    cout << ans << '\n';
    return;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}