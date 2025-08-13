#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,in;
    cin >> n;
    
    vector<int> freq(100'001, 0);
    int m = -1;
    while(n--){
        cin >> in;
        m = max(m, in);
        freq[in]++;
    }

    for(int i = 1 ; i <= m; i++) freq[i] += freq[i - 1];

    int q;
    cin >> q;
    while(q--){
        cin >> in;
        if(in >= m) cout << freq[m] << '\n';
        else cout << freq[in] << '\n';
    }
    return 0;
}