#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short l,r;
    cin >> l >> r;
    cin.ignore();

    while(l <= r){
        int mid = (l + r) / 2;
        cout << mid << endl;

        string in;
        getline(cin, in);
        if(in == "selamat"){
            return 0;
        }else if(in == "terlalu kecil"){
            l = mid + 1;
        }else r = mid - 1;
    }
}