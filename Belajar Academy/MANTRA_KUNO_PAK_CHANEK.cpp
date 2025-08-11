#include <bits/stdc++.h>
using namespace std;

bool aturan1(string s){
    int n = s.length();
    bool dif = 0;
    
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]){
            if(dif) return 0;
            else dif = 1;
        }
    }
    return 1;
}

bool aturan2(string s){
    set<char> st;
    for(char c : s){
        st.insert(c);
    }
    return st.size() >= 3;
}

bool aturan3(string s){
    return s.find("kutuk") == string::npos;
}

void solve(){
    int n, ans = 0;
    cin >> n;

    string s;
    while(n--){
        cin >> s;
        if(aturan1(s) && aturan2(s) && aturan3(s)) {
            ans++;
        }
    }

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short t;
    cin >> t;
    while(t--) solve();
    return 0;
}