#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short a, b, c;
    cin >> a >> b >> c;
    
    cout << max(a*b*c, max((a + b) * c,max(a + b + c,  a * (b + c)))) << '\n';
    return 0;
}