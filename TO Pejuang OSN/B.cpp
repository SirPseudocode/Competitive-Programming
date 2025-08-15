#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    char c;
    int jatah = 0, res = 0;
    while(n--){
        cin >> c;

        if(jatah > 0) jatah--;
        else if(c == 'B'){
            jatah = k - 1;
            res++;
        }
    }
    cout << res << '\n';
    return 0;
}