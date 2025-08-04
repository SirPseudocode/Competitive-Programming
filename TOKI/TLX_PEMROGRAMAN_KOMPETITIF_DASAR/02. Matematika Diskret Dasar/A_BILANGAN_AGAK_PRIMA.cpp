#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

bool SemiPrima(int n){
    if(n <= 0) return 0;

    int count = 2;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            if(n / i == i) count++;
            else count += 2;
        }
    }
    return count <= 4;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(SemiPrima(n)) cout << "YA\n";
        else cout << "BUKAN\n";
    }
    return 0;
}