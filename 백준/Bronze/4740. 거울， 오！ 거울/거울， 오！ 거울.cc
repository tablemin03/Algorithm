#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    while(1){
        string s;
        getline(cin, s);
        if(s == "***") break;
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }
}