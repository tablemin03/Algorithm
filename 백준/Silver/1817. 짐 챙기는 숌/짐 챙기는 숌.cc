#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;
	int cmp = 0, box = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (cmp == 0 || cmp + x > m) {
			cmp = x;
			box += 1;
		}
		else if (cmp + x <= m) cmp += x;
	}
	cout << box;
}