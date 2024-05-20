#include <iostream>
#include <algorithm>
#include <vector>;
using namespace std;

vector<pair<int,int>> time_table;
bool cmp(pair<int, int> v1, pair<int, int> v2) {
	if (v1.second != v2.second) return v1.second < v2.second;
	else return v1.first < v2.first;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		time_table.push_back(make_pair(x, y));
	}
	sort(time_table.begin(), time_table.begin() + n, cmp);
	int end = time_table[0].second, cnt = 1;
	for (int i = 1; i < n; i++) {
		if (end <= time_table[i].first) {
			cnt++;
			end = time_table[i].second;
		}
	}
	cout << cnt;
}