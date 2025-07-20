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

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b; 
    }
    
    return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    vector<string> words(n);
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    sort(words.begin(), words.end(), compare);
    
    for (string word : words) {
        cout << word << '\n';
    }
    
    return 0;
}