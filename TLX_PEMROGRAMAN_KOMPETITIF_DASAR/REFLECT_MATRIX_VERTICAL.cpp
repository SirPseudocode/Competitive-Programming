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

    short n,m;
    cin >> m >> n;

    short arr[m][n];

    for(short i = 0 ; i < m ; i++){
        for(short j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }

    for(short i = 0 ; i < n ; i++){
        short t = 0 , b = m - 1;
        while(t < b){
            swap(arr[t][i],arr[b][i]);
            t++;
            b--;
        }
    }
}