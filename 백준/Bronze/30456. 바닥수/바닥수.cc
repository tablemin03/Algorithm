#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, l;
    cin >> n >> l;
    for (int i = 0; i < l - 1; i++) cout << 1;
    cout << n;
}