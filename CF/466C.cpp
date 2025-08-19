#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    arr[0] = 0;
    for(int i = 1 ; i <= n ;i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int res = 0;
    for(int i = 2 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            if
            (
                ((arr[i - 1] - arr[0]) == (arr[j] - arr[i - 1])) &&
                ((arr[j] - arr[i - 1]) == (arr[n] - arr[j]))
            ) res++;
        }
    }
    cout << res << endl;
    return 0;
}