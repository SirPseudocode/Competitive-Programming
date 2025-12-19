#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n, in;
    cin >> n;

    int m = 0, b = 0;
    while(n--){
        cin >> in;
        if(in % 2 == 0) m+= in;
        else b += in;
    }

    if(m > b) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}