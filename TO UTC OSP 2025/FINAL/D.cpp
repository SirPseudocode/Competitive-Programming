#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    ll k;
    cin >> n >> m >> k;

    ll rem = k - m;
    if(rem < 0){
        cout << -1 << endl;
        exit(0);
    }

    vector<int> ans(n);
    for(int i = 0 ; i < n ; i++){
        ll add = min(i, m - 1);
        add = min(rem,add);
        rem -= add;

        ll contrib = add + 1;
        ll bentrok = i - contrib;
        if(bentrok < 0) ans[i] = i + 1;
        else ans[i] = ans[bentrok];
    }

    if(rem > 0){
        cout << -1 << endl;
        exit(0);
    }

    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}   