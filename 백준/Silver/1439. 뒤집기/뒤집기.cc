#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    cin >> s;
    int cnt = 1;
    char cur = s[0];
    for(int i=1; i < s.size(); i++){
        if(s[i] != cur){
            cnt++;
            cur = s[i];
        }
    }
    cout << cnt/2;
}