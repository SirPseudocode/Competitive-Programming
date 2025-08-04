#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long b, k;
    cin >> b >> k;
    b = k - b; k = 1;
    while(k < b) k *=2;
    while(b > 0 && k > 0){
        if(b - k >= 0){
            cout << k <<'\n';
            b -= k;
        }
        k /= 2;
    }
}