#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long a,b, dif;
    cin >> a >> b;
    dif = b - a;
    long long m = 1;
    while(m <= dif / 3){
        m *= 3;
    }

    while(m >= 1){
        if(dif - m >= 0){
            dif -= m;
            cout << m << '\n';
        }
        m /= 3;
        if(dif == 0) break;
    }
}