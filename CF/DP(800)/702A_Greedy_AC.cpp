#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int res = -1, temp = 1,st, nd;
    cin >> st;
    for(int i = 1 ; i < n ; i++){
        cin >> nd;
        if(nd <= st){
            res = max(res, temp);
            temp = 1;
        }else temp++;
        st = nd;
    }
    res = max(res,temp);
    cout << res << '\n';
    return 0;
}