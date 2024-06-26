#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if(x % y == 0) return y;
    else return gcd(y, x % y);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s, tmp;
    cin >> s;
    int n, m;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ':'){
            tmp = s.substr(0,i);
            n = stoi(tmp);
            tmp = s.substr(i + 1,s.size());
            m = stoi(tmp);
            break;
        }
    }
    int x = gcd(n,m);
    cout << n / x << ':' << m / x;
}