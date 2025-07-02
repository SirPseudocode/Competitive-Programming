#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

bool Check(int n){
    int f = 0;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            f++;
            if(f >= 2){
                return 0;
            }
        }
    }
    return 1;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int temp;
        cin >> temp;
        if(Check(temp)){
            cout << "YA\n";
        }else{
            cout << "BUKAN\n";
        }
    }
    return 0;
}