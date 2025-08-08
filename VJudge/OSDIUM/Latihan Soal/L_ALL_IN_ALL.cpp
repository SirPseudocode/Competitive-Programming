#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s,t;
    while(cin >> s){
        cin >> t;

        int lim = t.size(), sptr = 0, maxptr = s.size();
        for(int i = 0 ; i < lim && sptr < maxptr ; i++){
            if(t[i] == s[sptr]){
                sptr++;
            }
        }

        if(sptr == maxptr) cout << "Yes\n" << flush;
        else cout << "No\n" << flush;
    }
}