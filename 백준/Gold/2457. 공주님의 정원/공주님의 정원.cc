#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
#define X first
#define Y second

vector<pair<pair<int, int>, pair<int, int>>> v(100005);
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i].X.X >> v[i].X.Y >> v[i].Y.X >> v[i].Y.Y;
	}
	sort(v.begin(), v.begin() + n);
	int idx = 0;
	int x = 3, y = 1;
	int cnt = 0;
	while (1) {
		int cidx = idx;
		priority_queue<pair<int, int>> pq;
		for (;;) {
			if (idx >= n) break;
			if (v[idx].Y.X <= x) {
				if (v[idx].Y.X < x) {
					idx++;
					continue;
				}
				else if (v[idx].Y.Y < y) {
					idx++;
					continue;
				}
			}
			if (v[idx].X.X <= x) { // 월이 작거나 같다
				if (v[idx].X.X < x) pq.push({ v[idx].Y.X,v[idx].Y.Y });
				else if (v[idx].X.Y <= y) pq.push({ v[idx].Y.X,v[idx].Y.Y });
				else break;
				idx++;
			}
			else break;
		}
		if (cidx == idx || idx > n) {
			cout << 0;
			return 0;
		}
		cnt++;
		x = pq.top().X;
		y = pq.top().Y;
		if (11 < x) break;
	}
	cout << cnt;
}