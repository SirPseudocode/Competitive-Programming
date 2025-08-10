#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    int n;
    cin >> n;

    map<int,int> freq;
    while(n--){
        int strength;
        cin >> strength;

        for(int i = 2 ; i * i <= strength ; i++){
            if(strength % i == 0){
                freq[i]++;
                while(strength % i == 0){
                    strength /= i;
                }
            }
        }

        if(strength > 1) freq[strength]++;
    }

    int ans = 1;
    for(auto &p : freq){
        ans = max(ans, p.second);
    }
    cout << ans << '\n';
}