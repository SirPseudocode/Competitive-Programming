#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short m, n;
    cin >> m >> n;

    short maxsize = max(m, n);
    
    short arr[maxsize][maxsize];
    for(int i = 0; i < maxsize; i++) {
        for(int j = 0; j < maxsize; j++) {
            arr[i][j] = -1;
        }
    }

    for(short i = 0; i < m; i++){
        for(short j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(short i = 0; i < maxsize; i++){
        for(short j = i; j < maxsize; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(short i = 0; i < maxsize; i++){
        for(short j = 0; j < maxsize; j++){
            if(arr[i][j] == -1){
                continue;
            }
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}