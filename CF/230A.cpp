#include <bits/stdc++.h>
using namespace std;

struct m{
    int x;
    int y;
};

bool cmp(const m &a,const m &b){
    return a.x < b.x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, s;
    cin >> s >> n;

    vector<m> arr;
    while(n--){
        m input;
        cin >> input.x >> input.y;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end(), cmp);
    for(const m &dual : arr){
        if(s <= dual.x){
            cout << "NO\n";
            return 0;
        } else s+= dual.y;
    }
    cout << "YES\n";
    return 0;
}