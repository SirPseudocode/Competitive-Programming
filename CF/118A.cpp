#include <bits/stdc++.h>
using namespace std;

bool check(const char &c){
    return !(c == 'a' || c == 'i' || c == 'u' ||
    c == 'u' || c == 'e' || c == 'o' ||
    c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O' ||
    c == 'y' || c == 'Y');
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(char &c : s){
        if(check(c)){
            cout << '.' << char(tolower(c));
        }
    }
    return 0;
}
