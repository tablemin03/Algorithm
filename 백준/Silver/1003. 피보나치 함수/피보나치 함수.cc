#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v(42);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	v[0] = make_pair(1, 0); v[1] = make_pair(0, 1);
	for (int i = 2; i < 41; i++) {
		v[i].first = v[i - 1].first + v[i - 2].first;
		v[i].second = v[i - 1].second + v[i - 2].second;
	}
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int x; cin >> x;
		cout << v[x].first << " " << v[x].second << "\n";
	}
}