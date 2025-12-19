#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s == "abc") {
        cout << "YES\n";
        return 0;
    }

    for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 3; ++j){
            swap(s[i], s[j]);
            if(s == "abc"){
                cout << "YES\n";
                return 0;
            }
            swap(s[i], s[j]);
        }
    }

    cout << "NO\n";
    return 0;
}
