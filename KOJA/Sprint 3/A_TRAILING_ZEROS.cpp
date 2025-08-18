#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int res = 0;;
    while(n > 0){
        res += n / 5;
        n /= 5;
    }
    cout << res << endl;
    return 0;
}

