#include <bits/stdc++.h>
using namespace std;

char nomor[] = {'6','7','8','9','T','J','Q','K','A'};

short idx(const char &c){
    for(int i = 0 ; i < 9 ; i++){
        if(nomor[i] == c) return i + 1;
    }
    return 0;
}

bool solve(){
    short n, m;
    char joker;
    cin >> n >> m >> joker;

    map<char,short> mp;

    while(n--){
        char nmbr, smbl;
        cin >> nmbr >> smbl;
        mp[smbl] += idx(nmbr);
    }

    while(m--){
        char nmbr, smbl;
        cin >> nmbr >> smbl;
        mp[smbl] -= idx(nmbr);
    }

    if(mp[joker] < 0) return 0;

    for(char c : {'S','C','D','H'}){
        if(c == joker) continue;
        if(mp[c] < 0){
            int need = -mp[c];
            if(mp[joker] < need) return 0;
            mp[joker] -= need;
            mp[c] = 0;
        }
    }

    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    short t;
    cin >> t;
    while(t--){
        if(solve()) cout << "YA\n";
        else cout << "TIDAK\n";
    }
    return 0;
}