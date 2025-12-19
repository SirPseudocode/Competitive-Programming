#include <bits/stdc++.h>
using namespace std;
const int INF = 1'000'000'023;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int res = 0;
    while(n > 0){
        string str = to_string(n);
        char subtract = '0';
        for(char &c : str) subtract = max(subtract, c);
        n -= (subtract - '0');
        res++;
    }
    cout << res << endl;
    return 0;
}