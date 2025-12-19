#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n, ev = 0, odd = 0, lastodd, lastev, in;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> in;
        if(in % 2 == 0){
            lastev = i;
            ev++;
        }else{
            lastodd = i;
            odd++;
        }
    }
    if(odd == 1) cout << lastodd << '\n';
    else cout << lastev << '\n';
    return 0;
}