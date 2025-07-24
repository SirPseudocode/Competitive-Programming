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

    int n, b, total = 0, ans = 0;
    cin >> n >> b;

    int arr[n];
    for(int i = 0 ; i < n ;i++) cin >> arr[i];

    sort(arr, arr+n, greater<int>());

    for(int i = 0 ; i < n ; i++){
        total += arr[i];
        ans++;
        if(total >= b) break;
    }
    cout << ans << '\n';
    return 0;
}