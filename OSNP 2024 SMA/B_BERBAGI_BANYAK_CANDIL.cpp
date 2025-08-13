#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long b, c, d;
    cin >> b >> c >> d;
    c -= d;

    if(c <= 0){
        cout << max(0LL, b - d) << '\n';
        return 0;
    }

    long long res = 0;
    for(long long i = 1; i * i <= c; ++i){
        if(c % i == 0){
            long long x1 = i;
            long long x2 = c / i;

            if(x1 > d && x1 <= b) res++;
            if(x2 > d && x2 <= b && x2 != x1) res++;
        }
    }

    cout << res << '\n';
    return 0;
}
