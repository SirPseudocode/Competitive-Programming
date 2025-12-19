#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

int Euclid(int a, int b){
    if(b == 0) return a;
    else{
        return Euclid(b, a % b);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;

    cout << Euclid(x,y) << '\n';
    return 0;
}