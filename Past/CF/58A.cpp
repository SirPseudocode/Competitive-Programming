#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s, ans = "hello";
    cin >> s;
    short pt = 0;
    for(char &c : s){
        if(c == ans[pt]){
            pt++;
        }
    }
    if(pt == 5) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}