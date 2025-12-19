#include <bits/stdc++.h>
using namespace std;

int jawaban = 0;

void DFS(int node, int parent, vector<vector<int>> &ADJ, vector<bool> &kucing, int curr, int m) {
    if (kucing[node]) curr++;
    else curr = 0;

    if (curr > m) return;

    bool isLeaf = true;
    for (int next : ADJ[node]) {
        if (next == parent) continue;
        isLeaf = false;
        DFS(next, node, ADJ, kucing, curr, m);
    }

    if (isLeaf) jawaban++;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<bool> kucing(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        kucing[i] = (x == 1);
    }

    vector<vector<int>> ADJ(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        ADJ[x].push_back(y);
        ADJ[y].push_back(x);
    }

    DFS(1, 0, ADJ, kucing, 0, m);

    cout << jawaban << "\n";
    return 0;
}
