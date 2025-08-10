#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> task;

bool sorting(pair<int,int> a, pair <int,int> b){
    return a.second < b.second;
}

void solve(){
    sort(task.begin(), task.end(), sorting);
    int selected = 0, ans = 0, lim = task.size();
    for(int i = 0 ; i < lim ; i++){
        if(task[i].first >= selected){
            ans++;
            selected = task[i].second;
        }
    }

    cout << ans << '\n';
    return;
}

void input(){
    int n,s,e;
    cin >> n;
    task.clear();
    while(n--){
        cin >> s >> e;
        task.emplace_back(s,e);
    }
    solve();
    return;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    short t;
    cin >> t;
    while(t--) input();
    return 0;
}