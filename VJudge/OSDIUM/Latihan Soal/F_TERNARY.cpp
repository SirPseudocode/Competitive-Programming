#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long in;
    string res;
    while(cin >> in){
        if(in <= -1) return 0;
        res = "";

        do{
            res = to_string(in % 3) + res;
            in /= 3;
        }while(in > 0);

        cout << res << '\n';
    }
    return 0;
}