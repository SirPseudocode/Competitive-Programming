#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, res = 0;
    cin >> n >> k;

    queue<int> data;
    for(int i = 0 ; i < n ; i++){
        int in;
        cin >> in;
        data.push(in);
    }

    while(!data.empty()){
        res += 2;
        int m = -1;
        for(int i = 0 ; i < k && !data.empty(); i++){
            m = max(m,data.front());
            data.pop();
        }
        res += m;
    }

    cout << res + 3 << '\n';
    return 0;
}