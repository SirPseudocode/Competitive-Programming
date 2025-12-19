#include <bits/stdc++.h>
using namespace std;

unordered_set<long long> st;

void precompute(){
    bitset<1'000'001> eliminated;
    eliminated[0] = eliminated[1] = true;

    for(int i = 2 ; i * i <= 1'000'000 ; i++){
        if(!eliminated[i]){
            st.insert(1LL * i * i);
            for(long long j = 1LL * i * i ; j <= 1'000'000 ; j += i)
                eliminated[j] = true;
        }
    }

    for(int i = sqrt(1'000'000) + 1 ; i <= 1'000'000 ; i++){
        if(!eliminated[i]) st.insert(1LL * i * i);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    precompute();

    int q;
    long long in;
    cin >> q;
    while(q--){
        cin >> in;
        if(st.count(in)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
