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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    v<v<int>> graph(n+1);

    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    v<bool> visited(n+1, false);

    int component = 0;

    queue <int> q;
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            q.push(i);
            visited[i] = 1;

            while(!q.empty()){
                int curr = q.front();
                q.pop();

                for(int j = 0 ; j < graph[curr].size() ; j++){
                    int neighbor = graph[curr][j];

                    if(!visited[neighbor]){
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
            component++;
        }
    }
    cout << component - 1 << '\n';
    return 0;
}