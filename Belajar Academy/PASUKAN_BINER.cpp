#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long l, r;
    cin >> l >> r;
    
    vector<int> satu;
    for(long long i = l; i <= r; i++){
        long long temp = i;
        int ans = 0;
        while(temp > 0){
            if(temp % 2 == 1) ans++;
            temp /= 2;
        }
        satu.push_back(ans);
    }

    int maxBits = *max_element(satu.begin(), satu.end());
    vector<int> freq(maxBits + 1, 0);

    for(int bits : satu) {
        freq[bits]++;
    }

    vector<bool> isPrime(maxBits + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i <= maxBits; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= maxBits; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    int result = 0;
    for(int i = 2; i <= maxBits; i++){
        if(isPrime[i]){
            result += freq[i];
        }
    }
    
    cout << result << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}