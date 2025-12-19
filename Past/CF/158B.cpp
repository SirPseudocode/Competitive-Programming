#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, in, ans = 0;
    cin >> n;

    vector<int> freq(5, 0);
    while(n--){
        cin >> in;
        freq[in]++;
    }

    ans += freq[4] + freq[3];
    if(freq[1] > freq[3]){
        freq[1] -= freq[3];
        ans += (2*freq[2] + freq[1] + 3) / 4;
    }else ans += (freq[2] + 1) / 2;
    
    cout << ans << '\n';
    return 0;
    
}