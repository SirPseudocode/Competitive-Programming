#include <bits/stdc++.h>
using namespace std;

vector<short> ans ={1,2,3,4,5,6,7,8};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(ans.size() > 1){
        short r = ans.size(), mid = r  / 2;

        cout << "?" << endl;
        for(int i = 0 ; i < mid ; i++) cout << ans[i] <<' ';
        cout << endl;
        for(int i = mid ; i < r ; i++) cout << ans[i] << ' ';
        cout << endl;

        vector<short> temp;
        string in;
        cin >> in;
        if(in == "KIRI"){
            for(int i = 0 ; i < mid ; i++){
                temp.push_back(ans[i]);
            }
            ans.clear();
            for(short x : temp){
                ans.push_back(x);
            }
            temp.clear();
        }else{
            for(int i = mid ; i < r ; i++){
                temp.push_back(ans[i]);
            }
            ans.clear();
            for(short x : temp){
                ans.push_back(x);
            }
            temp.clear();
        }

    }
    cout << "! " << ans[0] << endl;
}