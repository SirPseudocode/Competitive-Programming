#include<bits/stdc++.h>
using namespace std;

short ans = 0;

void solve(){
    short temp = 0;
    bool in;
    cin >> in;
    if(in) temp++;
    cin >> in;
    if(in) temp++;
    cin >> in;
    if(in) temp++;
    if(temp >= 2) ans++;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);    cin.tie(0);

    short n;
    cin >> n;
    while(n--) solve();
    cout << ans << '\n';
    return 0;
}