#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n); 
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int maxval = *max_element(arr.begin(), arr.end());

    vector<int> freq(maxval + 1, 0); 
    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    vector<bool> div(maxval + 1, false);
    for(int i = 1 ; i <= maxval ; i++){
        if(freq[i] > 0){

            if(freq[i] > 1){
                div[i] = true;
            }

            for(int j = 2 * i ; j <= maxval ; j += i){
                if(freq[j] > 0){
                    div[j] = true;
                }
            }
        }
    }
    
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(!div[arr[i]]) ans++;
    }
    cout << ans << '\n';
    
    return 0;
}