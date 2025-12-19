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

    for(short i = 0 ; i < m ; i++){
        short l = 0 , r = n - 1;
        while(l < r){
            swap(arr[i][l],arr[i][r]);
            l++;
            r--;
        }
    }
}