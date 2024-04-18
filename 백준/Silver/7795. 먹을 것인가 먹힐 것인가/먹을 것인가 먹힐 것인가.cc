#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v1(20001);
vector<int> v2(20001);
int bs(int k) {
	int l = 0, r = m;
	while (l < r) {
		int mid = (l + r) / 2;
		if (k <= v2[mid]) r = mid;
		else l = mid + 1;
	}
	return r;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> v1[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> v2[i];
		}
		sort(v2.begin(), v2.begin() + m);
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt += bs(v1[i]);
		}
		cout << cnt << "\n";
	}
}