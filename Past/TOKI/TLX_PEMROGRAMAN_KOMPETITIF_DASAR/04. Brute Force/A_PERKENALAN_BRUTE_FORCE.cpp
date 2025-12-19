#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define ull unsigned long long
#define unset unordered_set
#define mset multiset
#define v vector
#define fi first
#define se second
#define pb push_back
#define pqueue priority_queue
using namespace std;
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    if(a.size() != b.size() + 1) {
        cout << "Wah, tidak bisa :(\n";
        return 0;
    }

    string ans = "";
    for(int i = 0, j = 0 ; i < a.size() && j < b.size() ; i++){
        if(a[i] == b[j]){
            ans+= a[i];
            j++;
        }
    }
    
    if(ans == b) cout << "Tentu saja bisa!\n";
    else cout << "Wah, tidak bisa :(\n";
    return 0;
}