#include <bits/stdc++.h>
using namespace std;

multiset<int> price;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        price.insert(x);
    }

    for(int i = 0; i < m; ++i){
        int t;
        cin >> t;

        auto it = price.upper_bound(t);

        if(it == price.begin()){
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            price.erase(it);
        }
    }
}
