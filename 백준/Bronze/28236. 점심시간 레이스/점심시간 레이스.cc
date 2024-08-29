#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	int mn = n + m, idx = 1;
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		if (m - y + x < mn) {
			mn = m - y + x;
			idx = i + 1;
		}
	}
	cout << idx;
}