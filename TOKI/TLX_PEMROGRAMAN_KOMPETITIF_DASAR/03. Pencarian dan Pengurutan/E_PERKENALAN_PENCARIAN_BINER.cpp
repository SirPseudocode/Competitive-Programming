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
using namespace std;
const int mod = 1e9 + 7;

int binser_lower(int left, int right, int arr[], int n){
    int result = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] > n) {
            result = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return result;
}

int binser_upper(int left, int right, int arr[], int n){
    int result = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] <= n){
            result = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int berat[n];
    for(int i = 0 ; i < n ; i++) cin >> berat[i];

    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;

        int lower = binser_lower(0, n - 1, berat, x);
        int upper = binser_upper(0, n - 1, berat, y);
        
        if(lower == -1 || upper == -1 || lower > upper){
            cout << "0\n";
        }else{
            cout << upper - lower + 1 << '\n';
        }
    }
}