#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;
    cin >> n;

    long long start = sqrt(n);
    while(start >= 1){
        if(n % start == 0){
            cout << start - 2 + n / start << '\n';
            return 0;
        }
        start--;
    }
    return 0;
}