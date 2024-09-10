#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int a, b, c;
	cin >> a >> b;
	cin >> c;

	if (a + b >= c * 2) cout << a + b - c - c;
	else cout << a + b;
}