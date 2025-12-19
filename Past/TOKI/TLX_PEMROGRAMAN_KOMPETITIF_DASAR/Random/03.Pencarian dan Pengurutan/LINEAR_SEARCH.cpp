#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define f first
#define s second
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;

ll n;

void search(ll h[], ll x){
    ll hasil = 0;
    for(ll i = 0 ;  i < n ; i++){
        if(h[i] == x){
            hasil = i;
            break;
        }
    }
    if(hasil == 0){
        cout << "beri hadiah lain\n";
    }else{
        cout << hasil << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    n = 5;
    ll hadiah[5] = {10,20,30,40,50};
    search(hadiah, 7);
    return 0;
}