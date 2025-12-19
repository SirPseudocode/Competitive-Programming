#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int in, mn = INT_MAX, mx = INT_MIN, cntmn = 0, cntmx = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> in;
        if(in > mx){
            cntmx = 1;
            mx = in;
        } else if(in == mx) cntmx++;

        if(in < mn){
            cntmn = 1;
            mn = in;
        } else if(in == mn) cntmn++;
    }

    long long d = 1LL * mx - mn;
    if(d) cout << d << ' ' << 1LL * cntmn * cntmx << '\n'; 
    else  cout << d << ' ' << 1LL * n * (n - 1) / 2 << '\n';
}
