#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n;
    string s;
    cin >> n >> s;
    for(char c : s){
        c += n;
        if(c > 90) c = c - 26;
        cout << char(c);
    }
    cout << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}