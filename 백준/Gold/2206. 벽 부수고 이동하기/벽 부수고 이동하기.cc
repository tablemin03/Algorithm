#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

char board[1000][1000];
int dist[1000][1000][2];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int n, m;
int bfs() {
	dist[0][0][1] = dist[0][0][0] = 1;
	queue<tuple<int, int, int>> q;
	q.push({ 0,0,0 });
	while (!q.empty()) {
		int x, y, broken;
		tie(x, y, broken) = q.front(); q.pop();
		if (x == n - 1 && y == m - 1) return dist[x][y][broken];
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dist[nx][ny][broken] == 0 && board[nx][ny] == '0') {
				dist[nx][ny][broken] = dist[x][y][broken] + 1;
				q.push({ nx,ny,broken });
			}
			if (!broken && board[nx][ny] == '1' && dist[nx][ny][1] == 0) {
				dist[nx][ny][1] = dist[x][y][broken] + 1;
				q.push({ nx,ny,1 });
			}
		}
	}
	return -1;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	cout << bfs();
}