    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int n;
        cin >> n;
        vector<bool> cek(n + 1, 0);
        n--;
        while(n--){
            int x;
            cin >> x;
            cek[x] = 1;
        }

        n = cek.size();
        for (int i = 1; i < n; ++i) {
            if (!cek[i]) {
                cout << i << '\n';
                return 0;
            }
        }
    }