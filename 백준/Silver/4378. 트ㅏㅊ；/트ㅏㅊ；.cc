#include <bits/stdc++.h>
using namespace std;

string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    while(getline(cin, s)){
        string ret = "";
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < keyboard.size(); j++){
                if(s[i] == ' '){
                    ret += ' ';
                    break;
                }
                else if(s[i] == keyboard[j]){
                    ret += keyboard[j - 1];
                    break;
                }
            }
        }
        cout << ret << "\n";
    }
}