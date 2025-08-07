#include <bits/stdc++.h>
using namespace std;

void solve(){
    string ask, in;
    cin >> ask;
    short n, lim = ask.size();
    bool ans;
    cin >> n;
    while(n--){
        ans = 1;
        cin >> in;
        if(in.size() < lim) continue;

        for(int i = 0 ; i < lim ; i++){
            if(in[i] != ask[i] && ask[i] == '*'){
                ans = 0;
                break;
            }
            else{
                int back = in.size() - 1;
                for(int j = back ; j > i ; j--){

                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    solve();
    return 0;
}