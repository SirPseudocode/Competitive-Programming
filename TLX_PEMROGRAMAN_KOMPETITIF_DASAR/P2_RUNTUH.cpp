#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short r,c;
    cin >> r >> c;

    string arr[r];
    for(short i = 0; i < r; i++){
        cin >> arr[i];
    }

    bool terhapus;
    do{
        terhapus = false;
        for(short i = 0; i < r; i++){
            bool penuh = true;
            for(short j = 0; j < c; j++){
                if(arr[i][j] == '0'){
                    penuh = false;
                    break;
                }
            }
            if(penuh){
                terhapus = true;
                for(short j = 0; j < c; j++){
                    arr[i][j] = '0';
                }
                for(short k = 0; k < c; k++){
                    short dasar = i;
                    for(short l = i; l >= 0; l--){
                        if(arr[l][k] == '1'){
                            arr[dasar][k] = '1';
                            if(dasar != l){
                                arr[l][k] = '0';
                            }
                            dasar--;
                        }
                    }
                }
            }
        }
    }while(terhapus);
    
    for(short i = 0; i < r; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}