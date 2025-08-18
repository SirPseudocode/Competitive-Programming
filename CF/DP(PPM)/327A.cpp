#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    int total_ones = 0;
    
    int max_gain = INT_MIN, curr_gain = 0;
    for(int i = 0; i < n; ++i){
        int in;
        cin >> in;
        if(in == 1) total_ones++;

        int gain = (in == 0) ? 1 : -1;
        curr_gain = max(gain, curr_gain + gain);
        max_gain = max(max_gain, curr_gain);
    }

    if(max_gain < 0) max_gain = -1;

    cout << total_ones + max_gain << '\n';
    return 0;
}
/*
1 0 0 0 1 0 1 0 1 1 1 1

1 = 7
0 MAX
-1 -1
0 0
1 1

*/