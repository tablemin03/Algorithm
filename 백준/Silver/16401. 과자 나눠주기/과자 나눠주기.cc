#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v(1000001);
int m, n;
int lower_bound(int l, int r) {
	while (l + 1 < r) {
		int mid = (l + r) / 2;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += v[i] / mid;
		}
		if (sum < m) r = mid;
		else l = mid;
	}
	return l;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> m >> n;
	int maX = 0, miN = 1000000000;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] > maX) maX = v[i];
	}
	cout << lower_bound(0, maX + 1);
}