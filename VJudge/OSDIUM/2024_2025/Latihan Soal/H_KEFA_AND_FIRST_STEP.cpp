#include <bits/stdc++.h>
using namespace std;

int ans = 0, streak = 0, temp = -1;

void input(){
    int in;
    cin >> in;
    if(temp <= in){
        streak++;
    }else{
        streak = 1;
    }
    ans = max(ans,streak);
    temp = in;
}

void solve(){
    cout << ans << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    while(n--) input();
    solve();
    return 0;
}