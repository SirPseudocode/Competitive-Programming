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

ll gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b , a % b);
}

ll g(int n){
    ll result = 0;
    for(int i = 1 ; i < n ; i++){
        for(int j = i + 1 ; j <= n ; j++){
            result += gcd(i,j);
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin >> n){
        if(n > 1) cout << g(n) << '\n';
        else cout << '\n';
    }
    return 0;
}