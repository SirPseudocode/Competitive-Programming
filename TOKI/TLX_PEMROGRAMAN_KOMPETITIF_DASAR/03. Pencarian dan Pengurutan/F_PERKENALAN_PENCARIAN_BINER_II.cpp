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
#define pqueue priority_queue
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int total[n+5];
    total[0] = 0;
    cin >> total[1];
    for(int i = 2 ; i <= n ; i++){
        cin >> total[i];
        total[i] += total[i-1];
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int left = 1, right = n, result = 1;
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(total[mid] >= x){
                result = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        cout << result << '\n';
    }
}