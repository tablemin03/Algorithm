#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

int n, m;
int board[10][10];
int play_board[10][10];
int vis[10][10];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
vector<pair<int, int>> blank;
queue<pair<int, int>> virus;
void reset() {
	for (int i = 0; i < n; i++) fill(vis[i], vis[i] + m, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			play_board[i][j] = board[i][j];
			if (board[i][j] == 2) {
				virus.push({ i,j });
				vis[i][j] = 1;
			}
		}
	}
}
int bfs() {
	while (!virus.empty()) {
		int x, y; tie(x, y) = virus.front(); virus.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (play_board[nx][ny] != 0 || vis[nx][ny]) continue;
			play_board[nx][ny] = 2;
			vis[nx][ny] = 1;
			virus.push({ nx,ny });
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (play_board[i][j] == 0) cnt++;
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 0) blank.push_back({ i,j });
		}
	}
	vector<int> v(blank.size(), 1);
	fill(v.begin(), v.end() - 3, 0);
	int mx = 0;
	do {
		reset();
		for (int i = 0; i < blank.size(); i++) if (v[i] == 1) play_board[blank[i].first][blank[i].second] = 1; // 벽 넣기
		bfs();
		mx = max(mx, bfs());
	} while (next_permutation(v.begin(), v.end()));
	cout << mx;
}