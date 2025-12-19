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

void BinarySearch(ll h[], ll x){
    ll hasil = 0, kiri = 1, kanan = n;
    while(kiri <= kanan){
        ll tengah = (kiri + kanan) / 2;
        if(x < h[tengah]) kanan = tengah - 1;
        else if(x > h[tengah]) kiri = tengah + 1;
        else{
            hasil = tengah;
            break;
        }
    }

    if(hasil == 0) cout << "beri hadiah lain\n";
    else cout << hasil << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    n = 5;
    ll hadiah[5] = {10,20,30,40,50};
    
    BinarySearch(hadiah, 40);
    return 0;
}