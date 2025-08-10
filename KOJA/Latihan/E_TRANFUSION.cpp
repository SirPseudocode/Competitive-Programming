#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, cnt = 0, in, evens = 0, odds = 0;
    cin >> n;

    vector<int> even, odd;
    for(int i = 0 ; i < n ; i++){
        cin >> in;
        if(i % 2 == 0){
            even.push_back(in);
            evens += in;
        }else{
            odd.push_back(in);
            odds += in;
        }
    }

    int oddsize = odd.size(), evensize = even.size();
    if(odds % oddsize != 0 || evens % evensize != 0 || (odds / oddsize) != (evens / evensize)) cout << "NO\n";
    else cout << "YES\n";
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