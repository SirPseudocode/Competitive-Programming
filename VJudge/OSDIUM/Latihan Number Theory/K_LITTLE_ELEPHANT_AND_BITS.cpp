#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, ans = "";
    cin >> s;
    int lim = s.size();
    for(int i = 0 ; i < lim ; i++){
        if(s[i] == '0'){
            cout << ans << s.substr(i+1)<< '\n';
            return;
        }
        ans += s[i];
    }
    cout << ans.substr(1) << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}