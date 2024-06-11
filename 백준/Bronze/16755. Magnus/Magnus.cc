#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string s;
    cin >> s;
    bool honi[4];
    int cnt = 0;
    for(int i = 0; i < 4; i++) honi[i] = false;
    for(int i = 0; i < s.size(); i++){
        if(honi[0] == false) {
            if(s[i] == 'H') honi[0] = true;
            
        }
        else if(honi[1] == false) {
            if(s[i] == 'O') honi[1] = true;
            
        }
        else if(honi[2] == false) {
            if(s[i] == 'N') honi[2] = true;
        }
        else if(honi[3] == false) {
            if(s[i] == 'I') honi[3] = true;
        }
        if(honi[3]) {
            for(int j = 0; j < 4; j++) honi[j] = false;
            cnt++;
        }
    }
    cout << cnt;
}
