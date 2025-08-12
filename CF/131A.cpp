#include <bits/stdc++.h>
using namespace std;

short sz;

bool check(string s){
    for(int i = 1 ; i < sz ; i++){
        if(islower(s[i])) return 0;
    }
    return 1;
}

bool satu(string s){
    return islower(s[0]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    sz = s.size();
    if(check(s)){
        if(satu(s)){
            cout << char(toupper(s[0]));
            for(int i = 1 ; i < sz ; i++) cout << char(tolower(s[i]));
        }else{
            for(int i = 0 ; i < sz ; i++) cout << char(tolower(s[i]));
        }
        cout << '\n';
    }else cout << s << '\n';
    return 0;
}