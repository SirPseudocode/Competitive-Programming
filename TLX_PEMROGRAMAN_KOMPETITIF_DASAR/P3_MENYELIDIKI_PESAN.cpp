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

    short n;
    cin >> n;

    string pesan,kode1,kode2;
    cin >> pesan >> kode1 >> kode2; 

    vector <pair <char,char>> kamus;
    for(short i = 0 ; i < n ; i++){
        kamus.push_back({kode1[i],pesan[i]});
        for(short j = i + 1 ; j < n ; j++){
            if((kode1[i] == kode1[j] && pesan[i] != pesan[j]) || (kode1[i] != kode1[j] && pesan[i] == pesan[j])){
                cout << "Pak Dengklek bingung\n";
                return 0;
            } 
        }
    }

    string ans;
    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < n ; j++){
            if(kode2[i] == kamus[j].first){
                ans += kamus[j].second;
                break;
            }else if(j == n - 1){
                ans+= '?';
            }
        }
    }
    cout << ans << '\n';
    return 0;
}