#include <bits/stdc++.h>
using namespace std;

int ans(vector<int> arr, int x){
    int l = 0, r = arr.size() - 1, mid = (l + r)/2;
    if(arr[mid] >= x){
        l = mid;
    }else{
        r = mid - 1;
    }
    return mid;
}

int main(){
    int n,in;
    cin >> n;
    vector<vector<int>> idx(n + 1);
    for(int i = 0 ; i < n ; i++){
        cin >> in;
        idx[in].push_back(i);
    }

    int q,l,r,x;
    cin >> q;
    while(q--){
        cin >> l >> r >> x;

    }
}