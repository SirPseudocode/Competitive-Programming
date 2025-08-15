#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &in : arr) cin >> in;

    int res, lptr = 0, rptr = n - 1;
    lptr++;
    rptr--;

    while(lptr < n){
        if(arr[lptr] != arr[lptr - 1]) break;
        lptr++;
    }

    lptr--;

    while(rptr > lptr){
        if(arr[rptr] != arr[rptr + 1]) break; 
        rptr--;
    
    }

    rptr++;

    if(arr[0] == arr.back()) 
        cout << max(0, rptr - lptr - 1) << '\n';
    else 
        cout << min(rptr, n - lptr - 1) << '\n';

    return 0;
}