#include <bits/stdc++.h>
using namespace std;

short n;

int c(int x, int y){
    if(x - 1 == y) return x;
    if(y > x - y) y = x - y;
    int res = 1;
    for(int i = 1 ; i <= y ; i++){
        res *= x - i + 1;
        res /= i;
    }
    return res;
}
void input(){
    int x;
    cin >> x >> x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    int ans;
    if(n < 3) ans = 0;
    else ans = c(n,3);
    while(n--) input();
    cout << ans << '\n';
    return 0;
}