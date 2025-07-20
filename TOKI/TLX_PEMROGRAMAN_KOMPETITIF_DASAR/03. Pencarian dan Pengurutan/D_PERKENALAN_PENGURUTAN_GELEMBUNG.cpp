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

    v <int> arr;
    for(int i = 0 ; i < n ; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int ans = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        bool sorted = 1;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                sorted = 0;
                ans++;
            }
        }
        if(sorted) break;
    }
    cout << ans << '\n';
    return 0;
}