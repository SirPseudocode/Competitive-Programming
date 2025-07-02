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

    string input;
    cin >> input;

    short panjang = input.length(), n = sqrt(panjang);
    if(pow(n,2) != panjang){
        n++;
    }

    short ans = 0;
    for(short i = 0 ; i < n ; i++){
        for(short j = 0 ; j < n ; j++){
         if(i % 2 == 0){
            if(ans < panjang){
                cout << input[ans];
                ans++;
            }else{
                cout << '.';
            }
         }else{
            if(j == 0){
                ans += n - 1;
            }
            if(ans < panjang){
                cout << input[ans];
                ans--;
            }else{
                cout << '.';
                ans--;
                }

            if(j == n - 1){
                ans += n + 1;
            }
            }
        }
        cout << '\n';
    }
}