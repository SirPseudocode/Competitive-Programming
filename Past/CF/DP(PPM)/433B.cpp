#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<long long> srtstone(n + 1), stone(n + 1);
    srtstone[0] = stone[0] = 0;

    cin >> srtstone[1];
    stone[1] = srtstone[1];

    for(int i = 2 ; i <= n ; i++){
        cin >> srtstone[i];
        stone[i] = srtstone[i] + stone[i - 1];
    }

    sort(srtstone.begin(), srtstone.end());
    for(int i = 2 ; i <= n ; i++) srtstone[i] += srtstone[i - 1];

    int m;
    cin >> m;
    while(m--){
        int t, l, r;
        cin >> t >> l >> r;
        l--;
        if(t == 1) cout << stone[r] - stone[l] << '\n';
        else cout << srtstone[r] - srtstone[l] << '\n';
    }
    return 0;
}

/*
6
0 1 2 3 4 5 6
0 6 4 2 7 2 7
0 6 10 12 19 21 28

0 1 2 3 4 5 6
0 2 2 4 6 7 7
0 2 4 8 14 21 28

3
2 3 6
1 3 4
1 1 6



4
0 1 2 3 4
0 5 5 2 3
0 5 10 12 15

0 1 2 3 4
0 2 3 5 5
0 2 5 10 15

10
1 2 4   10
2 1 4   15
1 1 1   5
2 1 4   15
2 1 2   5
1 1 1   5
1 3 3   2
1 1 3   12
1 4 4   3
1 2 2   5
*/