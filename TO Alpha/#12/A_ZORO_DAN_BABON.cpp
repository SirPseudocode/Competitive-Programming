#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, d;
    cin >> n >> d;
    vector<int> zoro(n);
    for(int i = 0 ; i < n ; i++) cin >> zoro[i];
    
    int max = zoro.back() - d, ans = 0;
    vector<int> babon;
    for(auto z : zoro){
        if(z <= max){
            babon.push_back(z + d);
        }else break;
    }

    for(auto b : babon){
        int  l = 0, r = zoro.size() - 1;

        while(l <= r){
            int mid = (l + r) / 2;
            if(zoro[mid] == b){
                ans++;
                break;
            }
            else if(zoro[mid] > b) r = mid - 1;
            else l = mid + 1;
        }

    }
    cout << ans << '\n';
    return 0;
}