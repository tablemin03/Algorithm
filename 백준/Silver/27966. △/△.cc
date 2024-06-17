#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    long long n, let;
    cin >> n;
    let = n - 1 + (n - 1) * (n - 2); //1과 다른 정점들의 거리는 1, 나머지 정점들은 2씩
    cout << let << "\n";
    for(int i = 2; i <= n; i++) cout << "1 " << i << "\n";
}