#include <bits/stdc++.h>
using namespace std;

void solve(){
    short n;
    cin >> n;
    n = n * 1.08;
    if(n > 206) cout << ":(\n";
    else if(n == 206) cout << "so-so\n";
    else cout << "Yay!\n";
    return;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}