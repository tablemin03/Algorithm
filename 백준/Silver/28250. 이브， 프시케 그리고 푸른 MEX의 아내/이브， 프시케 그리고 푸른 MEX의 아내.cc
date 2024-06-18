#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, zero = 0, one = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 0) zero += 1;
        else if (x == 1) one += 1;
    }
    cout << zero * one * 2 + zero * (n - zero - one) + (zero * (zero - 1) / 2);
}