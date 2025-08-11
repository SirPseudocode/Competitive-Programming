#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    map<int, int> cnt;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    
    long long ans = 0;
    
    for(int i = 0; i < n; i++){
        int ai = arr[i];
        cnt[ai]--;
        
        for(int power = 0; power <= 31; power++){
            long long cur = 1LL << power;
            int target = cur - ai;
            
            if(cnt.count(target)){
                ans += cnt[target];
            }
        }
        
        cnt[ai]++; 
    }
    
    cout << ans / 2<< '\n';
    return 0;
}