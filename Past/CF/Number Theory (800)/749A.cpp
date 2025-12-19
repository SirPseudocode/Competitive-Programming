#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cout << n / 2 << '\n';
    while(n - 2 != 1 && n > 0){
        cout << 2 << ' ';
        n -= 2;
    }
    if(n > 0) cout << 3 << '\n';
    return 0;
}