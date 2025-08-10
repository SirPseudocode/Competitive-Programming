#include <bits/stdc++.h>
using namespace std;

deque<int> dq;
bool rev = 1;

void add(){
    if(rev){
        int x,y;
        cin >> x >> y;
        while(y--) dq.push_back(x);
        cout << dq.size() << '\n';
    }else{
        int x,y;
        cin >> x >> y;
        while(y--) dq.push_front(x);
        cout << dq.size() << '\n';

    }
}

void del(){
    if(rev){
        int y;
        cin >> y;
        cout << dq.front() << '\n';
        while(y--) dq.pop_front();
    }else{
        int y;
        cin >> y;
        cout << dq.back() << '\n';
        while(y--) dq.pop_back();

    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;  
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "add") add();
        else if(s == "del") del();
        else rev = !rev;
    }

    return 0;
}   