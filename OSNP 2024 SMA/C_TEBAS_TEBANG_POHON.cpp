#include <bits/stdc++.h>
using namespace std;

int main () {
   int N;
   long long M;
   cin >> N >> M;

   int A[N + 1];
   long long jumlah = 0;
   for (int i = 1 ; i <= N ; i ++) {
       cin >> A[i];
       jumlah += A[i];
   }   

   if (jumlah < M) {
       cout << -1 << '\n';
       return 0;
   }

   int l = 0, r = *max_element (A + 1, A + N + 1);
   while (l < r) {
       int mid = l + (r - l + 1) / 2;
       long long cur = 0;
       for (int i = 1 ; i <= N ; i ++) {
           if (A[i] > mid) {
               cur += A[i] - mid;
           }
       }

       if (cur >= M)
           l = mid;
       else
           r = mid - 1;
   }
   cout << l << '\n';
   return 0;
}