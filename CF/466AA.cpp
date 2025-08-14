#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(n * a, min((n / m)*b + (n % m) * a, ((n + m - 1) / m)* b)) << '\n';
    return 0;
}