#include <bits/stdc++.h>
using namespace std;

void solve(int &in, const vector<int> &s, int l, int r){
    while(l <= r){
        int mid = (l + r) / 2;
        if(s[mid] > in) r = mid - 1;
        else l = mid + 1;
    }
    cout << l << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q, in;
    cin >> n;
    vector<int> shops(n);
    for(int &cost : shops) cin >> cost;

    sort(shops.begin(), shops.end());

    cin >> q;
    while(q--){
        cin >> in;
        solve(in, shops, 0, n - 1);
    }
    return 0;
}
