#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short n;
    cin >> n;

   short lasteven, lastodd, odd = 0, even = 0, in;
   for(int i = 1; i <= n ; i++){
    cin >> in;
    if(in % 2 == 0){
        lasteven = i;
        even++;
    }else{
        lastodd = i;
        odd++;
    }
   }
   if(even == 1) cout << lasteven << '\n';
   else cout << lastodd << '\n';
   return 0;
}