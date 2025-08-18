#include <bits/stdc++.h>
using namespace std;

int cnt(vector<int> &arr, int pivot, int ptr){
    
}

int last(const vector<int> &arr, int pivot, int ptr){
    while(arr[ptr] >= pivot) ptr++;
    return ptr;
}

int solve(const vector<int> &arr, int pivot, int ptr){
    if(pivot == -1){
        if(arr[0] == 0) return 0 + solve(arr, 0, ptr + 1);
        return 1 + solve(arr, arr[ptr], ptr + 1);
    }

    if(arr[ptr] == pivot) return 0 + solve(arr, pivot, ptr + 1);
    if(arr[ptr] < pivot) return 1 + solve(arr, arr[ptr], ptr + 1);
    if(arr[ptr] > pivot){
        int idx = last(arr, arr[ptr], ptr + 1);
        if(arr[idx] != pivot){
            return 1 + solve(arr, arr[ptr], ptr + 1);
        }
        return cnt(arr, arr[ptr], ptr + 1) + solve(arr, pivot, idx);
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    cout << solve(arr, -1, 0)<< endl;
    return 0;
}