#include <bits/stdc++.h>
using namespace std;

vector<int> m(367,0), f(367,0);

void input(){
    char s;
    short a,b;
    cin >> s >> a >> b;
    if(s == 'M'){
        while(a <= b){
            m[a++]++;
        }
    }else{
        while(a <= b){
            f[a++]++;
        }
    }
}

void solve(){
    int ans = 0;
    for(short i = 1 ; i <= 366 ; i++){
        ans = max(ans,min(f[i],m[i]));
    }
    cout << ans *2 << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n;
    cin >> n;
    while(n--) input();

    solve();
    return 0;
}