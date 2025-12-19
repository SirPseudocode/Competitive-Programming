#include <bits/stdc++.h>
using namespace std;

int main(){
   string S;
   cin >> S;

   char c [3] = {'O', 'S', 'N'};
   int jawab = 0;
   sort (c, c + 3);

   do {
       int count = 0, index = 0;
       for (auto &itr : S){
           if (itr == c [index]){
               count++;
               index++;
               index %= 3;
           }
       }
       jawab = max (jawab, count);
   } while (next_permutation (c, c + 3));

   cout << (jawab < 3 ? -1 : jawab) << '\n';

   return 0;
}