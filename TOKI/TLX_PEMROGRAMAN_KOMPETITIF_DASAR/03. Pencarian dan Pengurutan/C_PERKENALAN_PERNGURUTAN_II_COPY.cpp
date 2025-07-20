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

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[j-1].length() > arr[j].length()) {
                string tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
            else if (arr[j-1].length() == arr[j].length()) {
                if (arr[j-1] > arr[j]) {
                    string tmp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}