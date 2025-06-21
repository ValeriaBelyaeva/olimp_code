#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string s; cin >> s;
    int balance = 0;
    int ans_ofset = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '(') balance++;
        else {
            balance--;
            if (balance < 0) ans_ofset++;
        }
    }
    cout << s.size() - ans_ofset - balance;
    return 0;
}
