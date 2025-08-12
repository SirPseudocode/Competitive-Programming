#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n,m,a;
    cin >> n >> m >> a;
    
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
    return 0;
}