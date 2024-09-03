#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int str, dex, in, luk, n;
    cin >> str >> dex >> in >> luk >> n;
    int cmp, tmp = str + dex + in + luk;
    cmp = n * 4;
    if (cmp - tmp >= 0) cout << cmp - tmp;
    else cout << 0;
}