#include<bits/stdc++.h>
using namespace std;

void solve(){
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    int sb1, sb2, sb3, sb4, sb5;
    cin >> sb1 >> sb2 >> sb3 >> sb4 >> sb5;

    if(c1 < sb1 || c2 < sb2 || c3 < sb3){
        cout << "NO\n";
        return;
    }

    c1 -= sb1;
    c2 -= sb2;
    c3 -= sb3;

    int rem_sb4 = max(0, sb4 - c1);
    int rem_sb5 = max(0, sb5 - c2);

    if(c3 < rem_sb4 + rem_sb5){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);    cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}  