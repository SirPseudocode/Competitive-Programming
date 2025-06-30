#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

vector<int> SieveOfEratosthenos(int n){
    vector<bool> eliminated (n+1 , false);
    vector<int> primelist;

    for(int i = 2 ; i <= n ; i++){
        if(!eliminated[i]){
            primelist.push_back(i);
            int j = i * i;
            while(j <= n){
                eliminated[j] = true;
                j += i;
            }
        }
    }
    return primelist;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> primes = SieveOfEratosthenos(n);
    for(int ans : primes){
        cout << ans << ' ';
    }
    cout << '\n';
    return 0;
}