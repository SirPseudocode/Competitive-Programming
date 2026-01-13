#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short n, ans = 0;
    cin >> n;
    while(n--){
        short p, q;
        cin >> p >> q;
        if(q - p >= 2) ans++;
    }

    cout << ans << endl;
    return 0;
}