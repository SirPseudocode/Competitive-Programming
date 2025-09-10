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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double total_rate = 0;
        while(n--){
            double input;
            cin >> input;
            total_rate += (1.0/input); 
        }

        cout << (1.0/total_rate) << '\n'; 
    }
}