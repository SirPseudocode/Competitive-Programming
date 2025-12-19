#include <vector>
#include <iostream>
using namespace std;

vector<int> FindDivisibleSubsequence(vector<int> A, int N) {
    // Inisialisasi array sum[0..N]
    vector<int> sum(N + 1);
    sum[0] = 0;
    
    // Hitung prefix sum
    for(int i = 1; i <= N; i++) {
        sum[i] = sum[i - 1] + A[i - 1];
    }
    
    // Inisialisasi array seenInIndex[0..N-1] dengan -1
    vector<int> seenInIndex(N, -1);
    
    for(int i = 0; i <= N; i++) {
        int remainder = ((sum[i] % N) + N) % N; // Handle negative remainder
        
        if(seenInIndex[remainder] == -1) {
            seenInIndex[remainder] = i;
        } else {
            int start = seenInIndex[remainder];
            int end = i;
            
            // Kembalikan indeks-indeks solusinya [start+1, start+2, ..., end]
            vector<int> result;
            for(int j = start + 1; j <= end; j++) {
                result.push_back(j); // Indeks 1-based sesuai pseudocode
            }
            return result;
        }
    }
    return {};
}
int main() {
    vector<int> A1;
    int n;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        A1.push_back(temp);
    }
    
    vector<int> result1 = FindDivisibleSubsequence(A1, A1.size());
    for(int idx : result1) cout << idx << " ";
    return 0;
}