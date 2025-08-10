#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            if (1LL * i * i <= n) {
                for (int j = i * i; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }
    }
}

void solve(int n) {
    cout << n << " = ";
    
    if (n < 0) {
        cout << "-1";
        n = -n;
        if (n > 1) cout << " x ";
    }
    
    bool first = true;
    
    for (int prime : primes) {
        if (1LL * prime * prime > n) break;
        
        while (n % prime == 0) {
            if (!first) cout << " x ";
            cout << prime;
            first = false;
            n /= prime;
        }
    }
    
    if (n > 1) {
        if (!first) cout << " x ";
        cout << n;
    }
    
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve(50000);
    
    int n;
    while (cin >> n && n != 0) {
        solve(n);
    }
    
    return 0;
}