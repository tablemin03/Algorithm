#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    cin >> s;
    int pre = 0;
    bool FA = false;
    for(int i = 0; i < 10; i++){
        int x = (s[0] - 48) * s.size();
        if(x == pre) FA = true;
        pre = x;
        s = to_string(x);
    }
    if(FA) cout << "FA";
    else cout << "NFA";
}