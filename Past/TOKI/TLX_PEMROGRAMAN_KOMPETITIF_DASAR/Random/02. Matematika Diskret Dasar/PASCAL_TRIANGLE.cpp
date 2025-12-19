#include <iostream>
#include <vector>
using namespace std;

void precomputeCombination(int N, vector<vector<int>>& C) {
    C.resize(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 0; i <= N; i++) {
        C[i][0] = 1;
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
        C[i][i] = 1;
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> C;
    
    precomputeCombination(N, C);
    
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}