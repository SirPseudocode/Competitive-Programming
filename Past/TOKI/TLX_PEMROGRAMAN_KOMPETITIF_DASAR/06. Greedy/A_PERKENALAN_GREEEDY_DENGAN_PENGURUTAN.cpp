#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,b;
    cin >> n >> b;
    
    int bebek[n];
    for(int i = 0 ; i< n ; i++) cin >> bebek[i];

    sort(bebek, bebek + n, greater<int>());

    for(int i = 0 ; i < n ; i++){
        b -= bebek[i];
        if(b <= 0){
            cout << i + 1 << '\n';
            return 0;
        }
    }
}