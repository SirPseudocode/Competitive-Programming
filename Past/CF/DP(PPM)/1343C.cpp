#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int prev, x;
    long long sum = 0;

    cin >> prev;
    n--;
    bool pstf = (prev > 0);
    
    while(n--){
        cin >> x;
        if(pstf && x < 0){
            pstf = 0;
            sum += prev;
            prev = x;
            continue;
        }

        if(!pstf && x > 0){
            pstf = 1;
            sum += prev;
            prev = x;
            continue;
        }

        prev = max(prev, x);
    }

    sum += prev;
    cout << sum << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}