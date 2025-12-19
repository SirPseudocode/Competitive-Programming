#include <bits/stdc++.h>
using namespace std;

vector<int> SieveofEratosthenos(int n){
    vector<bool> eliminated(n + 1, 0);
    vector<int> isprime;

    isprime.reserve( n / log(n) * 1.25);

    eliminated[0] = eliminated[1] = 1;
    for(int i = 2; i * i <= n ; i++){
        if(!eliminated[i]){
            for(int j = i * i ; j <= n ; j += i){
                eliminated[j] = 1;
            }
        }
    }

    for(int i = 2 ; i <= n ; i++){
        if(!eliminated[i]) isprime.push_back(i);
    }
    return isprime;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> ans = SieveofEratosthenos(1000000);
    int t,k;
    cin >> t;
    while(t--){
        cin >> k;
        cout << ans[k - 1] << '\n';
    }
    return 0;
}