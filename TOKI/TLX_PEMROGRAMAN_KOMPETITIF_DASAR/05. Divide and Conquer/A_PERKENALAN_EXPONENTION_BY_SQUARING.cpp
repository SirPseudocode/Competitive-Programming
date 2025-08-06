#include <bits/stdc++.h>
using namespace std;

const int mod = 1e6;
bool check = 0;

int pangkat(int x, int y){
    if(y == 0) return 1;
    if(y == 1) return x;
    int temp = pangkat(x, y / 2);
    if(temp >= 1e6 / temp) check = 1;
    temp = (1LL * temp * temp) % mod;
    if(y % 2 == 0) return temp;
    return (temp * x) % mod;
}

void solve(){
    int a, b;
    cin >> a >> b;
    a = pangkat(a,b);
    string ans = to_string(a);
    while(ans.size() < 6 && check) ans = '0' + ans;
    cout << ans << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}