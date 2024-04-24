#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& v1, const pair<int, int>& v2) {
	return v1.first > v2.first;
}
vector<pair<int, int>> v;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		bool chk = false;
		for (auto &c : v) { // 값을 바꾸기 위해서 참조를 꼭 해야함
			if (c.second == x) {
				c.first++;
				chk = true;
			}
		}
		if (!chk) v.push_back({ 1,x });
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (auto c : v) {
		for (int i = 0; i < c.first; i++) {
			cout << c.second << ' ';
		}
	}
}