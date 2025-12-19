#include <bits/stdc++.h>
using namespace std;

string mx(int m, int s){
    string res = "";
    while(m--){
        int dig = min(9, s);
        res += char('0' + dig);
        s -= dig;
    }
    return res;
}

string mn(int m, int s){
    string res(m, '0');

    for(int i = m - 1 ; i >= 0 ; i--){
        int dig = min(9, s);
        res[i] = char('0' + dig); 
        s -= dig;
    }

    if(res[0] == '0'){
        for(int i = 1; i < m; i++){
            if(res[i] > '0'){
                res[i]--;
                res[0] = '1';
                break;
            }
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short m, s;
    cin >> m >> s;
    if((s == 0 && m > 1) || s > 9 * m) cout << "-1 -1\n";
    else cout << mn(m, s) << ' ' << mx(m, s) << endl;
    return 0;
}
