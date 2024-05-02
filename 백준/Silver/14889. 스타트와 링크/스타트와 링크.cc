#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int board[22][22];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int diff = 0x7f7f7f7f;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> board[i][j];
	}
	vector<int> v(n, 1);
	fill(v.begin(), v.begin() + n / 2, 0);
	do {
		vector<int> start, link;
		int s_score = 0, l_score = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) start.push_back(i);
			else link.push_back(i);
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				if (i == j) continue;
				s_score += board[start[i]][start[j]];
				l_score += board[link[i]][link[j]];
			}
		}
		diff = min(diff, abs(s_score - l_score));
	} while (next_permutation(v.begin(), v.end()));
	cout << diff;
}