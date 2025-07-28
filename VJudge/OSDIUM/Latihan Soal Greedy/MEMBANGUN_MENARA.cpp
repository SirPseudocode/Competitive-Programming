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

    int t;
    cin >> t;

    while(t--){
        int n, x, y, z, highest = 0, lowest = 0;
        cin >> n;
        while(n--){
            cin >> x >> y >> z;
            highest += max(x,max(y,z));
            lowest += min(x,min(y,z));
        }
        cout << lowest << ' ' << highest << '\n';
    }
    return 0;
}