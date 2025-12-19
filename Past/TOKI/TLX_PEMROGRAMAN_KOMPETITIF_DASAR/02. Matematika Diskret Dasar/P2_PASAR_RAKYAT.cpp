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

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y , x % y);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;
    n--;
    while(n--){
        int in, f;
        cin >> in;
        f = gcd(x,in);
        x /= f;
        x *= in;
    }
    cout << x << '\n';
    return 0;
}