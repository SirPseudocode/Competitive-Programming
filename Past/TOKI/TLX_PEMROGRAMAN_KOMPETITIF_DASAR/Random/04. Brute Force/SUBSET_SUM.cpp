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
#define pqueue priority_queue
using namespace std;
const int mod = 1e9 + 7;

vector<int> a;
int N, K;

bool SOLVE(int i, int sum) {
    if (i > N) {
        if (sum == K) {
            return true;
        } else {
            return false;
        }
    }

    if(sum > K) return false;
    
    bool option1 = SOLVE(i + 1, sum + a[i-1]);
    
    bool option2 = SOLVE(i + 1, sum);
    
    return option1 || option2;
}

bool solveSubsetSum() {
    return SOLVE(1, 0);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    bool result = solveSubsetSum();
    
    if (result) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
    
    return 0;
}