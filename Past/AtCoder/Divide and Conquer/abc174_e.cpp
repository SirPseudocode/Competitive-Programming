#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int>& A, int K, int X) {
    int cuts = 0;
    for (int a : A) {
        cuts += (a + X - 1) / X - 1;
    }
    return cuts <= K;
}

int findMinX(const vector<int>& A, int K) {
    int left = 1;
    int right = *max_element(A.begin(), A.end());
    int answer = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (isValid(A, K, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    cout << findMinX(A, K) << endl;
    return 0;
}
