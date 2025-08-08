#include <bits/stdc++.h>
using namespace std;

string l, r;
int llim, rlim;

int find(string s){
    int limit = s.size();
    for(int i = 0 ; i < limit ; i++){
        if(s[i] == '*') return i;
    }
    return -1;
}

void solve(){
    string in;
    cin >> in;
    
    int inlim = in.size();

    if(inlim < llim + rlim) return;
    
    for(int i = 0 ; i < llim ; i++){
        if(in[i] != l[i]) return;
    }
    
    if(rlim > 0){
        int ptr = inlim - 1;
        for(int i = rlim - 1 ; i >= 0 ; i--, ptr--){ 
            if(in[ptr] != r[i]) return;
        }
    }

    cout << in << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string ask;
    cin >> ask;

    int idx = find(ask);
    l = ask.substr(0, idx);
    r = ask.substr(idx + 1);
    llim = l.size();
    rlim = r.size();

    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}