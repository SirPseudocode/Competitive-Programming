#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin >> w;

    w = w - 2;
    if(w % 2 == 0 && w != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}