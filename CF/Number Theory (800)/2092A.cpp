#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n;
    cin >>  n;
    int in, h, l;
    cin >> in;
    h = l = in;
    n--;
    while(n--){
        cin >> in;
        h = max(h,in);
        l = min(l,in);
    }

    cout << h - l << '\n';
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