#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(n--){
        int idx, cnt;
        char a;
        cin >> cnt >> a;
        idx = a - 65;
        for(int i = 1; i <= cnt; i++){
            idx %= 26;
            for(int j = 0; j < i; j++)cout << alpha[idx];
            cout << "\n";
            idx++;
        }
        cout << "\n";
    }
}