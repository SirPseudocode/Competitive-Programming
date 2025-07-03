#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define f first
#define s second
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;

ll gcd(int x, int y){
    if(y == 0) return x;
    return gcd(x, y % x);
}

ll lcm(int x, int y){
    return (x * y)/gcd(x,y);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e,f;
    cin >> a >> b >> c >> d;
    f = lcm(b,d);
    a *= (f / b);
    c *= (f / d);

    e = a + c;

    while(gcd(e,f) > 1){
        ll temp = gcd(e,f);
        e /= temp;
        f /= temp;
    }

    cout << e << ' ' << f << '\n';
    return 0;
}