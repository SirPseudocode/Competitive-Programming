#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short in;
    cin >> in;

    short arr[] = {4, 7, 44, 77, 47, 74, 444, 777, 447, 474, 744, 477, 774, 747};
    for(int i = 0 ; i < 14 ; i++){
        if(in % arr[i] == 0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}