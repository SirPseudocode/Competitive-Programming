#include <bits/stdc++.h>
using namespace std;

queue <short> q;

void solve(){
    short a,b;
    cin >> a;
    if(a == 1){
        cin >> b;
        q.push(b);
    }else{
        cout << q.front() << '\n';
        q.pop();
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short q;
    cin >> q;
    while(q--) solve();
    return 0;
}