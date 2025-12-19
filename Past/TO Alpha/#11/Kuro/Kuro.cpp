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
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, m;
    cin >> t >> m;

    m = pow(2.,m);

    while(t--){
        int n;
        cin >> n;
        cout << n % m << '\n';
    }
    return 0;
}