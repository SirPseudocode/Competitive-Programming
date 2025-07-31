#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define fi first
#define se second
#define pb push_back
#define pqueue priority_queue
using namespace std;
const int mod = 1e9 + 7;

int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

int GCD3(int a, int b, int c){
    return GCD(a, GCD(b,c));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    int ans = GCD3(x,y,z);
    cout << ans << '\n';
    return 0;
}