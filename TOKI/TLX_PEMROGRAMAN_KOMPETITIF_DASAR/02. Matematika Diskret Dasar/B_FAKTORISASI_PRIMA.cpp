#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multisetx
using namespace std;
const int mod = 1e9 + 7;

vector<pair<int, int>> factors(int n){
    vector<pair<int, int>> fact;
    for(int i=2; i * i<= n; i++){
        int count = 0;
        while(n % i == 0){
            n /= i;
            count++;
        }

        if(count > 0){
            fact.push_back(make_pair(i,count));
        }
    }
    if(n > 1)fact.push_back(make_pair(n,1));

    return fact;
}

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> faktor = factors(n);
    for(auto& [primes, mult]: faktor){
        if(mult > 1){
            cout << primes << "^" << mult;
        } else{
            cout << primes;
        }

        if(primes != faktor.back().first) cout << " x ";
    }
}