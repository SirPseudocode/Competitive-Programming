#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll denominator = lcm(b,d);
    a *= denominator / b;
    c *= denominator / d;
    ll numerator = a + c;
    ll div = gcd(numerator, denominator);
    cout << numerator / div << ' ' << denominator / div << '\n';
    return 0;
}