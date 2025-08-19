#include <bits/stdc++.h>
using namespace std;

int search(int n, int st){
    for(int i = st + 1 ; i * i <= n ; i++){
        if(n % i == 0) return i;
    }
    return 0;
}

void solve(){
    int n;
    cin >> n;

    vector<int> ans;
    int temp = search(n, 1);
    if(!temp){
        cout << "NO\n";
        return;
    }
    ans.push_back(temp);
    n /= temp;

    temp = search(n, ans[0]);
    if(!temp){
        cout << "NO\n";
        return;
    }
    ans.push_back(temp);
    n /= temp;

    if(n > 1 && n != ans[0] && n != ans[1]){
        cout << "YES\n" << ans[0] << " " << ans[1] << " " << n << "\n";
    }else{
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
}
