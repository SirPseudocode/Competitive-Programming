#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n, m;
    cin >> n >> m;
    if(n < m) swap(n,m);
    n--;
    m--;
    
    long long cnt = 2, res = 1;
    while(n--){
        res += cnt;
        cnt++;
    }
    cnt++;
    while(m--){
        res += cnt;
        cnt += 2;
    }
    cout << res << '\n';
    return 0;
}