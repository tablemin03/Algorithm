#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    ll a, b;
    ll cnt = 0;
    cin >> a >> b;
    for(ll i = 1; i * i <= b; i++){
        if(a < i * i && i * i <=b) cnt++;
    }
    ll g = gcd(cnt, b - a);
    if(cnt == 0) cout << 0;
    else cout << cnt / g << '/' << (b - a) / g;
}