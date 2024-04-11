#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<long long> v(2001);
int good(int idx) {
	for (int i = 0; i < n; i++) {
		int l = i + 1, h = n;
		if (i == idx) continue;
		while (l + 1 < h) {
			int mid = (l + h) / 2;
			long long goal = v[i] + v[mid];
			if (goal <= v[idx]) l = mid;
			else h = mid;
		}
		if (l == idx) {
			if (v[i] + v[l - 1] == v[idx] && i != l - 1) return 1;
		}
		else if (v[i] + v[l] == v[idx]) return 1;
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.begin() + n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += good(i);
	}
	cout << sum;
}