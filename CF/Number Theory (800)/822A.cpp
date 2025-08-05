#include <bits/stdc++.h>
using namespace std;

int faktorial(int a){
    int res = 1;
    for(int i = 2 ; i <= a ; i++) res *= i;
    return res;
}

void solve(){
    int a,b;
    cin >> a >> b;
    cout << faktorial(min(a,b)) << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}