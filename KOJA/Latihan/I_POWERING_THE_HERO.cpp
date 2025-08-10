#include <bits/stdc++.h>
using namespace std;

void solve(){
    priority_queue<long long> pq;
    int n;
    long long in, ans = 0;
    cin >> n;
    while(n--){
        cin >> in;
        if(in == 0 && !pq.empty()){
            ans += pq.top();
            pq.pop();
        }else pq.push(in);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}