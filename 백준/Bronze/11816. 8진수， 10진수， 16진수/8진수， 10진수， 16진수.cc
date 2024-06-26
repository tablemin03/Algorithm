#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    cin >> s;
    int a = 0;
    if(s[0] != '0') {
        a = stoi(s);
    }
    else if(s[0] == '0' && s[1] != 'x'){
        int m = 1;
        for(int i = s.size() - 1; i > 0; i--){
            a += (s[i] - 48) * m;
            m *= 8;
        }
    }
    else{
        int m = 1;
        for(int i = s.size() - 1; i > 1; i--){
            if('a' <= s[i] && s[i] <='f') a += (s[i] - 87) * m;
            else a += (s[i] - 48) * m;
            m *= 16;
        }
    }
    cout << a;
}