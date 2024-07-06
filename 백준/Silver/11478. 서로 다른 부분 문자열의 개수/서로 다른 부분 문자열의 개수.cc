#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    set<string> subset;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        string tmp = "";
        for(int j = i; j < s.size(); j++){
            tmp += s[j];
            subset.insert(tmp);
        }
    }

    cout << subset.size();
}