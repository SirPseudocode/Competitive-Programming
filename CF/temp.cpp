#include <bits/stdc++.h>
using namespace std;

vector<int> isprime;

void precompute(int n){
    vector<bool> eliminated(n + 1, false);
    eliminated[0] = eliminated[1] = true;

    for(int i = 2 ; i * i <= n ; i++){
        if(!eliminated[i]){
            for(long long j = 1LL * i * i ; j <= n ; j += i)
                eliminated[j] = true;
        }
    }

    for(int i = 2; i <= n; ++i){
        if(!eliminated[i]) isprime.push_back(i);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


}