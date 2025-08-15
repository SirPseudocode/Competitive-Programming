#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int x, y, n;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for(int &in : arr) cin >> in;

    map<pair<int, int>, int> freq;
    for(int a : arr){
        freq[{a % x, a % y}]++;
    }

    long long res = 0;
    for(int a : arr){
        int target_mod_x = (-a % x + x) % x;
        int target_mod_y = a % y;
        res += freq[{target_mod_x, target_mod_y}];
        if((a + a) % x == 0 && (a - a) % y == 0) res--;
    }

    cout << res / 2 << '\n';
    return 0;
}
