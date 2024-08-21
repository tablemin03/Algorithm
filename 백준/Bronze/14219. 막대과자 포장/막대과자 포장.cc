#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;

	int k = m % 3;
	bool full = false;
	if (m == 1) {
		if (n % 3 == 0) full = true;
	}
	else {
		if (k == 0) full = true;
		else if (n % 3 == 0) full = true;
	}
	if (full) cout << "YES";
	else cout << "NO";
}