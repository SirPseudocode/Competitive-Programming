#include <bits/stdc++.h>
using namespace std;

bool check(long long root){
    if(root < 2) return false; 
    for(long long i = 2; i * i <= root; i++){
        if(root % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    long long in, root;
    cin >> n;
    while(n--){
        cin >> in;
        root = sqrt(in);
        
        if(root * root == in && check(root)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}