#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);    cin.tie(0);

    short n,in,p;
    cin >> n;

    vector<bool> level(n + 1, 0);
    cin >> p;
    for(int i = 0 ; i < p ; i++){
        cin >> in;
        level[in] = 1;
    }
    
    cin >> p;
    for(int i = 0 ; i < p ; i++){
        cin >> in;
        level[in] = 1;
    }
    
    for(int i = 1 ; i <= n ; i++){
        if(!level[i]){
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";
    return 0; 
}