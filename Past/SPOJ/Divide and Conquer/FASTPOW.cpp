#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll FASTPOWER(ll x, ll y, ll c){
    if(y == 0) return 1;
    if(y == 1) return x % c; 
    ll temp = FASTPOWER(x, y / 2, c);
    temp = (temp * temp) % c;
    if(y % 2 == 0) return temp;
    return (temp * (x % c)) % c;
}
void solve(){
    ll a, b, m;
    cin >> a >> b >> m;
    if(m == 1) cout << 0 << '\n';
    else cout << FASTPOWER(a,b,m) << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);    cin.tie(0);

    solve();
    return 0;
}