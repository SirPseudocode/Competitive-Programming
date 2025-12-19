#include <bits/stdc++.h>
using namespace std;

bool ans(int x){
    for(int i = 2 ; i * i <= x ; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int a = 4, b = n - a;
    while(ans(a) || ans(b)){
        a++;
        b--;
    }
    cout << a << ' ' << b << '\n';
    return 0;
}