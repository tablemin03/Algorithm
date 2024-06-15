#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int f, g, a, n;
    cin >> f >> a;
    cin >> g;
    cin >> n;
    if(g <= f){
        if(g * n <= f * n + a) cout << 1;
        else cout << 0;
    }
    else cout << 0;
}