#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<int> temp;

long long combine(int l, int mid, int r) {
    long long inv = 0;
    int i = l, j = mid + 1, k = l;
    

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (mid - i + 1);
        }
    }
    
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    

    for (i = l; i <= r; i++) arr[i] = temp[i];
    
    return inv;
}

long long mergeSort(int l, int r) {
    if (l >= r) return 0;
    
    int mid = l + (r - l) / 2; 
    return mergeSort(l, mid); + mergeSort(mid + 1, r) + combine(l, mid, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    arr.resize(n);
    temp.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << mergeSort(0, n - 1) << '\n';
    
    return 0;
}