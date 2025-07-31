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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const int N = 1e8;
    v<bool> eliminated(N + 1, false);
    
    eliminated[0] = eliminated[1] = true;
    
    for(long long i = 2; i * i <= N; i++){
        if(!eliminated[i]){
            for(long long j = i * i; j <= N; j += i){
                eliminated[j] = true;
            }
        }
    }
    
    for(int i = 2; i <= N; i++){
        if(!eliminated[i]){
            cout << i << '\n';
        }
    }
    return 0;
}