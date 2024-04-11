#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int k, n, m;
int board[200][200];
int dist[200][200][31];
int dx[] = { -1,1,0,0,2,2,-2,-2,1,1,-1,-1 };
int dy[] = { 0,0,-1,1,-1,1,-1,1,-2,2,-2,2 };
int bfs() {
	dist[0][0][0] = dist[0][0][1] = 0;
	queue<tuple<int, int, int>> q;
	q.push({ 0,0,0 });
	while (!q.empty()) {
		int x, y, jump, nx, ny;
		tie(x, y, jump) = q.front(); q.pop();
		if (x == n - 1 && y == m - 1) return dist[x][y][jump];
		for (int i = 0; i < 12; i++) {
			if (jump >= k && i >= 4) break;
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nx][ny] == 1) continue;
			if (i < 4 && dist[nx][ny][jump] == 0) {
				dist[nx][ny][jump] = dist[x][y][jump] + 1;
				q.push({ nx,ny,jump });
			}
			else if (i >= 4 &&dist[nx][ny][jump + 1] == 0) {
				dist[nx][ny][jump + 1] = dist[x][y][jump] + 1;
				q.push({ nx,ny,jump + 1 });
			}
		}
	}
	return -1;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> k;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	cout << bfs();
}