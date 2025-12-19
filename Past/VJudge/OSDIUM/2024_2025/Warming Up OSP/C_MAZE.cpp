#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m;

    vector<vector<short>> maze(n, vector<short>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> maze[i][j];
        }
    }

    cin >> a >> b;
    a--; b--;

    queue<pair<int,int>> q;
    vector<vector<int>> dist(n, vector<int>(m, -1   ));

    q.push({a,b});
    dist[a][b] = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while(!q.empty()){
        auto [r, c] = q.front();
        q.pop();

        if(r == 0 || r == n - 1 || c == 0 || c == m - 1){
            cout << dist[r][c] << '\n';
            return 0;
        }

        for(int i = 0 ; i < 4 ; i++){
            int nr = r + dr[i], nc = c + dc[i];
            if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                if(maze[nr][nc] == 0 && dist[nr][nc] == -1){
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
}
