#include <bits/stdc++.h>
using namespace std;

int res = 0;
vector<vector<char>> arr;

void dfs(const short &i, const short &j){
    if(i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size()) return;
    if(arr[i][j] != '.') return;

    arr[i][j] = '#';    

    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
   short n, m;
   cin >> n >> m;
   arr.resize(n, vector<char>(m));

    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < m ; j++){
            if(arr[i][j] == '.'){
                dfs(i, j);
                res++;  
            }
        }
    }
    cout << res << endl;
    return 0;
}