#include <bits/stdc++.h>
using namespace std;

vector<short> c(1'000'023, -1);

bool cek(int x){
    if(x < 0) return 0;
    if(c[x] != -1) return c[x];
    if(x == 0) return c[x] = 1;
    return c[x] = (cek(x - 2021) || cek(x - 2020));
}

void solve(){
    int n;
    cin >> n;
    if(cek(n)) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
}
