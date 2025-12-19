#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int val, idxmn = -1, idxmx = -1;
    int mn = INT_MAX, mx = INT_MIN;

    for(int i = 0; i < n; ++i){
        cin >> val;
        if(val < mn){
            mn = val;
            idxmn = i;
        }
        if(val > mx){
            mx = val;
            idxmx = i;
        }
    }

    int left = max(idxmn, idxmx) + 1;
    int right = max(n - idxmn, n - idxmx);
    int cross1 = idxmn + 1 + (n - idxmx);
    int cross2 = idxmx + 1 + (n - idxmn);

    cout << min({left, right, cross1, cross2}) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
