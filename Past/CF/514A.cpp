#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string x;
    cin >> x;

    if(x[0] == '9' || x[0] <= '4') cout << x[0];
    else cout << 9 - (x[0] - '0');

    x = x.substr(1);
    for(char &c : x){
        if((c - '0') > 4) cout << 9 - (c - '0');
        else cout << c;
    }
    return 0;
}  