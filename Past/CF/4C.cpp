#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    string s;
    map<string,int> m;
    while(n--){
        cin >> s;
        if(m.count(s) == 0){
            cout << "OK\n";
            m[s]++;
        }else{
            cout << s << m[s] << '\n';
            m[s]++;
        }
    }
    return 0;
}