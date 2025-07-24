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

    int berat[n];
    for(int i = 0 ; i < n ; i++) cin >> berat[i];

    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;

        int lower = -1, upper = -1;

        for(int i = 0 ; i < n ; i++){
            if(berat[i] > x){
                lower = i;
                break;
            }
        }

        if(lower == -1){
            cout << 0 << '\n';
            continue;
        }

        for(int i = n - 1; i >= 0 ; i--){
            if(berat[i] <= y){
                upper = i;
                break;
            }
        }

        if(upper == -1 || lower > upper){
            cout << 0 << '\n';
        }else{
            cout << upper - lower + 1 << '\n';
        }
    }
}