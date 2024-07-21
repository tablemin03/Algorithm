#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m, ret = 0;
	cin >> n >> m;
	int k = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		k = x > k ? x : k;
	}
	ret += k;
	k = 0;
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		k = x > k ? x : k;
	}
	ret += k;
	cout << ret;
}