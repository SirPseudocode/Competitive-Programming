#include <bits/stdc++.h>
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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,s,d;
    cin >> n;
    while(n--){
        cin >> s >> d;
        if(s < d || (s % 2 == 1 && d % 2 == 0) || (s % 2 == 0 && d % 2 == 1)) cout << "impossible\n";
        else if(d != s) cout << d + ((s - d) / 2) << ' ' << (s - d) / 2 << '\n';
        else cout << d << ' ' << 0 << '\n';
    }
}