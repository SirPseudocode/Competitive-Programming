#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short m , n , x;
    cin >> m >> n >> x;

    short size = max(m,n);

    short arr[size][size];
    for(short i = 0 ; i < size ; i++){
        for(short j = 0 ; j < size ; j++){
            arr[i][j] = -1;
        }
    }

    for(short i = 0 ; i < m ; i++){
        for(short j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }


    while(x--){
        string temp;
        cin >> temp;

        if(temp == "_"){
             for(short i = 0 ; i < size ; i++){
                short t = 0, b = size - 1;
                while(t < b){
                    swap(arr[t][i],arr[b][i]);
                    t++;
                    b--;
                }
            }
        }else if(temp == "|"){
            for(short i = 0 ; i < size ; i++){
                short l = 0 , r = size - 1;
                while(l < r){
                    swap(arr[i][l],arr[i][r]);
                    l++;
                    r--;
                }
            }
        }else if(temp == "90"){
            for(short i = 0 ; i < size ; i++){
                for(short j = i ; j < size ; j++){
                    swap(arr[i][j],arr[j][i]);
                }
            }
            for(short i = 0 ; i < size ; i++){
                short l = 0 , r = size - 1;
                while(l < r){
                    swap(arr[i][l],arr[i][r]);
                    l++;
                    r--;
                }
            }
        }else if(temp == "180"){
            for(short i = 0 ; i < size ; i++){
                short l = 0 , r = size - 1;
                while(l < r){
                    swap(arr[i][l],arr[i][r]);
                    l++;
                    r--;
                }
            }

            for(short i = 0 ; i < size ; i++){
                short t = 0, b = size - 1;
                while(t < b){
                    swap(arr[t][i],arr[b][i]);
                    t++;
                    b--;
                }
            }
        }else{
            for(short i = 0 ; i < size ; i++){
                for(short j = i ; j < size ; j++){
                    swap(arr[i][j],arr[j][i]);
                }
            }

            for(short i = 0 ; i < size ; i++){
                short t = 0, b = size - 1;
                while(t < b){
                    swap(arr[t][i],arr[b][i]);
                    t++;
                    b--;
                }
            }
        }
    }


    for(short i = 0  ; i < size ; i++){
        for(short j = 0 ; j < size ; j++){
            if(arr[i][j] == -1){
                continue;
            }
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}