#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> left_unique(n);
    set<char> seen;
    for(int i = 0; i < n; i++){
        seen.insert(s[i]);
        left_unique[i] = seen.size();
    }
    
    vector<int> right_unique(n);
    seen.clear();
    for(int i = n-1; i >= 0; i--){
        seen.insert(s[i]);
        right_unique[i] = seen.size();
    }
    
    int max_sum = 0;
    for(int i = 0; i < n-1; i++){
        int sum = left_unique[i] + right_unique[i+1];
        max_sum = max(max_sum, sum);
    }
    
    cout << max_sum << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}