#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if(x % y == 0) return y;
    return gcd(y, x % y);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string a, b;
    cin >> a >> b;
    int A = a.size();
    int B = b.size();
    int lcm = A * B / gcd(A,B);

    string cmpA = a, cmpB = b;
    for(int i = a.size(); i < lcm; i += a.size()) cmpA += a;
    for(int i = b.size(); i < lcm; i += b.size()) cmpB += b;
    if(cmpA == cmpB) cout << 1;
    else cout << 0;
}