#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < y) cout << "NO BRAINS\n";
		else cout << "MMM BRAINS\n";
	}
}