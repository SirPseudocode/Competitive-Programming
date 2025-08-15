#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for(char &c : s){
        freq[c - 'A']++;
    }

    int odd_count = 0;
    int odd_index = -1;
    for(int i = 0; i < 26; ++i){
        if(freq[i] & 1){
            odd_count++;
            odd_index = i;
        }
    }

    if(odd_count > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }

    string half = "";
    for(int i = 0; i < 26; ++i){
        for(int j = 0; j < freq[i] / 2; ++j){
            half += char(i + 'A');
        }
    }

    string res = half;
    if (odd_index != -1) {
        res += char(odd_index + 'A');
    }

    reverse(half.begin(), half.end());
    res += half;

    cout << res << '\n';
    return 0;
}
