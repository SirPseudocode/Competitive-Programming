#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

long long power(long long x, long long y){
    if(y == 0) return 1;
    if(y == 1) return x % mod;

    long long temp = power(x, y / 2);
    temp = (temp * temp) % mod;
    if(y % 2 == 0) return temp;
    return (temp * (x % mod)) % mod;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m = max(m, arr[i]);
    }

    vector<int> freq(m + 1, 0);
    for(auto x : arr) freq[x]++;

    long long ans = 1;
    
    for(int i = 0; i <= m; i++){
        if(freq[i] >= 2){
            ans = 0;
            break;
        }
    }
    
    if(ans != 0){
        for(int i = 0; i <= m; i++){
            for(int j = i + 1; j <= m; j++){
                long long cnt = 1LL * freq[i] * freq[j];
                if(cnt > 0){
                    int temp = i ^ j;
                    ans = (ans * power(temp, cnt)) % mod;
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}