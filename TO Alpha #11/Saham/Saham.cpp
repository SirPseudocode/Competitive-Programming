#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define fi first
#define se second
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1; j < n ; j++){
            if(arr[i] == arr[j]){
                bool benar = 1;
                for(int k = i+1 ; k < j ; k++){
                    if(arr[k] > arr[i]){
                        benar = 0;
                        break;
                    }   
                }
                if(benar) ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}