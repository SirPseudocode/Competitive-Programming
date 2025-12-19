#include <bits/stdc++.h>
using namespace std;

string order = " 6789TJQKA";

int rank_num(char c){
    return order.find(c);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, m;   char r;
        cin >> n >> m >> r;
        
        multiset<int> truf;
        map<char, multiset<int>> suit_cards;

        while(n--){
            string card;    cin >> card;
            char num = card[0], suit = card[1];
            if(suit == r) truf.insert(rank_num(num));
            else suit_cards[suit].insert(rank_num(num));
        }

        bool bisa = 1;
        while(m--){
            string card;    cin >> card;
            char num = card[0], suit = card[1];
            int target = rank_num(num);

            if(suit == r){
                auto it = truf.upper_bound(target);

                if(it != truf.end()) truf.erase(it);
                else{ bisa = false; break;}
            }else{
                auto &cards = suit_cards[suit];
                auto it = cards.upper_bound(target);

                if(it != cards.end()) cards.erase(it);
                else{
                    if(!truf.empty()) truf.erase(truf.begin());
                    else { bisa = false; break;}
                }
            }
        }
        cout << (bisa ? "YA" : "TIDAK") << endl; 
    }
}