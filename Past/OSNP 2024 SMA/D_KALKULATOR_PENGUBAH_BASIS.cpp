#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7 ;

int add (long long a, long long b) {
   a += b ;
   if (a >= mod) a -= mod ;
   return a ;
}



int konversi (string &x, int l, int r) {
   long long hasil = 0;
   for (int i = l ; i <= r ; i ++) {
       hasil *= 10 ;
       hasil += x [i] - '0';
   }
   return hasil;
}



int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


   int basis;
   cin >> basis;
   string Y;
   cin >> Y;

   int digitBasis = 0;
   int temp = basis;
   while (temp) {
       digitBasis ++;
       temp /= 10;
   }

   int n = Y.length ();
   int dp [n + 1];
   dp [n] = 1;
   for (int i = n - 1 ; i >= 0 ; i --) {
       dp [i] = 0;
       if (Y [i] == '0') {
           dp [i] = dp [i + 1];
           continue;
       }

       for (int j = 1; j <= digitBasis && i + j - 1 < n ; j ++) {
           if (konversi (Y, i, i + j - 1) < basis) {
               dp [i] = add (dp [i], dp [i + j]);
           }
       }
   }

   cout << dp [0] << '\n';
   return 0;
}

