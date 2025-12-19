#include <bits/stdc++.h>
using namespace std;

bool equilibrium(short &x, short &y, short &z){
    return x == 0 & y == 0 && z == 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);    cin.tie(0);

    short n, x = 0, y = 0, z = 0, xi,yi,zi;
    cin >> n;
    while(n--){
        cin >> xi >> yi >> zi;
        x += xi;
        y +=yi;
        z += zi;
    }
    if(equilibrium(x,y,z)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}