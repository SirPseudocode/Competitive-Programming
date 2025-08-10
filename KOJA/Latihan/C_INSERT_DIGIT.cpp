#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    for(int i = 0 ; i < n ; i++){
        if((s[i] - '0') < d) {
            cout << s.substr(0, i) << d << s.substr(i) << '\n';
            return;
        }
    }
    cout << s << d << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}