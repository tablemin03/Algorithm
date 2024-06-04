#include <iostream>
#include <string>
#include <map>
using namespace std;

int lcm(int a, int b) {
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	for (int i = 1;; i++) {
		if ((max * i) % min == 0) return max * i;
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int m, n, x, y, result = 0;
		cin >> m >> n >> x >> y;
		int least = lcm(m, n);
		for (int j = x; j <= least; j+=m) {
			int ny = j % n;
			if (ny == 0) ny = n;
			if (ny == y) {
				result = j;
				break;
			}
		}
		if (result == 0) cout << -1 << "\n";
		else cout << result << "\n";
	}
}