#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    string cmp = "anj";
    bool name = false;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == cmp) name = true;
    }
    cout << "뭐야";
    if(name) cout << ';';
    else cout << '?';
}