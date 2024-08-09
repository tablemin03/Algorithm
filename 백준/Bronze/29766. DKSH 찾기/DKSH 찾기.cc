#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie();

    string s, a = "DKSH";
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i,4) == a) cnt++;
    }
    cout << cnt;
}