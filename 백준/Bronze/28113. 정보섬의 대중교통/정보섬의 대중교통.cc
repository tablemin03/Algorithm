#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, bus, subway;
    cin >> n >> bus >> subway;
    if(bus < subway) cout << "Bus";
    else if(n <= subway && bus == subway) cout << "Anything";
    else if(subway < n) cout << "Bus";
    else cout << "Subway";
}