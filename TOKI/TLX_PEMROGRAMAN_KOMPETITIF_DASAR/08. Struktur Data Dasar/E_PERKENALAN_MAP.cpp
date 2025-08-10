#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,q;
    cin >> n >> q;

    map<string,string> m;
    string name, telp;
    while(n--){
        cin >> name >> telp;
        m[name] = telp;
    }

    while(q--){
        cin >> name;
        if(m.count(name) > 0) cout << m[name] << '\n';
        else cout << "NIHIL\n";
    }
    return 0;
}