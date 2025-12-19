#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    int ops = 0;
    while(m > n){
        if(m % 2 == 0) m /= 2;
        else m += 1;
        ops++;
    }
    cout << ops + (n - m) << '\n';
    return 0;
}