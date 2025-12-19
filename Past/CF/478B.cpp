#include <bits/stdc++.h>
using namespace std;

long long C(long long x){
    return x * (x - 1) / 2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;

    long long mx = C(n - m + 1);

    long long q = n / m; 
    long long r = n % m;  
    long long mn = r * C(q + 1) + (m - r) * C(q);

    cout << mn << " " << mx << "\n";
}
