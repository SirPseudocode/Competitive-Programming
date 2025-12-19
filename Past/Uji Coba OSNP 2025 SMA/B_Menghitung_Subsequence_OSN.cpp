#include <bits/stdc++.h>
using namespace std;

int upper(const vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return l;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> O, S, N;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'O') O.push_back(i);
        else if (s[i] == 'S') S.push_back(i);
        else if (s[i] == 'N') N.push_back(i);
    }

    int lim = S.size();
    vector<int> countNAfterS(lim);
    for (int i = 0; i < lim; ++i) {
        countNAfterS[i] = N.size() - upper(N, S[i]);
    }

    long long res = 0;
    lim = O.size();
    for (int i = 0; i < lim; ++i) {
        int idx = upper(S, O[i]);
        for (int j = idx; j < S.size(); ++j) {
            res += countNAfterS[j];
        }
    }

    cout << res << '\n';
}
