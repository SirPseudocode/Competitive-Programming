#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int s = 0, in;
    bool temp = 0;
    while(n--){
        cin >> in;
        s += in;
        if(in % 3 == 1) temp = 1;
    }
    
    if(s % 3 == 0) cout << 0 << '\n';
    else if(s % 3 == 2) cout << 1 << '\n';
    else{
        if(temp) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}