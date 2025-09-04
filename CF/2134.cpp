#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if(n % 2 != b % 2)
    {
        cout << "NO\n";
        return;
    }
    else if (a <= b)
    {
        cout << "YES\n";
    }
    else if(a % 2 == b % 2)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}