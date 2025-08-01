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

int GCD(int x, int y){
    if(y == 0) return x;
    return GCD(y, x % y);
}

int LCM(int x, int y){
    return (x*y) / GCD(x,y);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, ans, temp;
    cin >> n >> ans;
    n--;
    while(n--){
        int temp;
        cin >> temp;
        ans = LCM(ans,temp);
    }

    cout << ans << '\n';
    return 0;
}