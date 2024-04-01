#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int board[10][10];
int dist[10][10];
vector<pair<int, int>> v;
int n, m, cnt = 100;
void solve(int k) {
	int cmp = 0;
	if (k == v.size()) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dist[i][j] == 0) cmp++;
			}
		}
		cnt = min(cnt, cmp);
		return;
	}
	int x, y;
	x = v[k].first;
	y = v[k].second;
	int val = board[x][y];
	if (board[x][y] == 2) { // 두방향
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				for (int dy = y; dy < m; dy++) {
					if (board[x][dy] == 6) break;
					dist[x][dy] += 1;
				}
				for (int dy = y; dy >= 0; dy--) {
					if (board[x][dy] == 6) break;
					dist[x][dy] += 1;
				}
				solve(k + 1);
				for (int dy = y + 1; dy < m; dy++) {
					if (board[x][dy] == 6) break;
					dist[x][dy] -= 1;
				}
				for (int dy = y - 1; dy >= 0; dy--) {
					if (board[x][dy] == 6) break;
					dist[x][dy] -= 1;
				}
			}
			else {
				for (int dx = x; dx >= 0; dx--) {
					if (board[dx][y] == 6) break;
					dist[dx][y] += 1;
				}
				for (int dx = x; dx < n; dx++) {
					if (board[dx][y] == 6) break;
					dist[dx][y] += 1;
				}
				solve(k + 1);
				for (int dx = x - 1; 0 <= dx; dx--) {
					if (board[dx][y] == 6) break;
					dist[dx][y] -= 1;
				}
				for (int dx = x + 1; dx < n; dx++) {
					if (board[dx][y] == 6) break;
					dist[dx][y] -= 1;
				}
			}
		}
	}
	else if (board[x][y] == 5) { // 한번만
		for (int i = y; i < m; i++) {
			if (board[x][i] == 6) break;
			dist[x][i] += 1;
		}
		for (int i = y; i >= 0; i--) {
			if (board[x][i] == 6) break;
			dist[x][i] += 1;
		}
		for (int i = x; i >= 0; i--) {
			if (board[i][y] == 6) break;
			dist[i][y] += 1;
		}
		for (int i = x; i < n; i++) {
			if (board[i][y] == 6) break;
			dist[i][y] += 1;
		}
		solve(k + 1);
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (i == 0) {
				for (int dy = y; dy < m; dy++) {
					if (board[x][dy] == 6) break;
					dist[x][dy] += 1;
				}
				if (board[x][y] != 1) {
					for (int dx = x; dx >= 0; dx--) {
						if (board[dx][y] == 6) break;
						dist[dx][y] += 1;
					}
					if (board[x][y] == 4) {
						for (int dy = y; dy >= 0; dy--) {
							if (board[x][dy] == 6) break;
							dist[x][dy] += 1;
						}
					}
				}
				solve(k + 1);
				if (board[x][y] == 1) {
					for (int dy = y + 1; dy < m; dy++) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
				}
				else if (board[x][y] == 3) {
					for (int dx = x - 1; dx >= 0; dx--) {
						if (board[dx][y] == 6) break;
						dist[dx][y] -= 1;
					}
				}
				else {
					for (int dy = y - 1; dy >= 0; dy--) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
				}
			}
			else if (i == 1) {
				for (int dx = x; dx < n; dx++) {
					if (board[dx][y] == 6) break;
					dist[dx][y] += 1;
				}
				solve(k + 1);
				if (val == 1) {
					for (int dx = x + 1; dx < n; dx++) {
						if (board[dx][y] == 6) break;
						dist[dx][y] -= 1;
					}
				}
				else if (val == 3) {
					for (int dy = y + 1; dy < m; dy++) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
				}
				else {
					for (int dx = x - 1; dx >= 0; dx--) {
						if (board[dx][y] == 6) break;
						dist[dx][y] -= 1;
					}
				}
			}
			else if (i == 2) {
				for (int dy = y; dy >= 0; dy--) {
					if (board[x][dy] == 6) break;
					dist[x][dy] += 1;
				}
				solve(k + 1);
				if (val == 1) {
					for (int dy = y - 1; dy >= 0; dy--) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
				}
				else if (val == 3) {
					for (int dx = x + 1; dx < n; dx++) {
						if (board[dx][y] == 6) break;
						dist[dx][y] -= 1;
					}
				}
				else {
					for (int dy = y + 1; dy < m; dy++) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
				}
			}
			else {
				for (int dx = x; dx >= 0; dx--) {
					if (board[dx][y] == 6) break;
					dist[dx][y] += 1;
				}
				solve(k + 1);
				for (int dx = x - 1; dx >= 0; dx--) {
					if (board[dx][y] == 6) break;
					dist[dx][y] -= 1;
				}
				if (val != 1) {
					for (int dy = y - 1; dy >= 0; dy--) {
						if (board[x][dy] == 6) break;
						dist[x][dy] -= 1;
					}
					if (val == 4) {
						for (int dx = x + 1; dx < n; dx++) {
							if (board[dx][y] == 6) break;
							dist[dx][y] -= 1;
						}
					}
				}
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 0 && board[i][j] != 6) {
				v.push_back({ i,j });
			}
			else if (board[i][j] == 6) dist[i][j] = 6;
		}
	}
	solve(0);
	cout << cnt;
}