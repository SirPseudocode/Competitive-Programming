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

    sort(arr, arr+n, greater<int>());

    int ans = 0, lowest = n - 1;
    for(int i = 0 ; i < n  ;i++){
        if(i > lowest) break;

        int temp = arr[i];
        while(temp < 4 && i < lowest){
            if(temp + arr[lowest] <= 4){
                temp += arr[lowest];
                lowest--;
            }else break;
        }

        ans++;
    }
    cout << ans << '\n';
    return 0;
}