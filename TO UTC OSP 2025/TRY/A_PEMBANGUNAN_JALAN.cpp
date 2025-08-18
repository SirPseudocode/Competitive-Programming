#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    unsigned long long sum = 0;

    int in, prev;
    cin >> prev;
    n--;
    
    while(n--){
        cin >> in;
        sum += in + prev;
        prev = in;
    }
    cout << sum << endl;
    return 0;
}