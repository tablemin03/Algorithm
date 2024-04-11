#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int board[101][101];
int dist[101][101];
bool vis[101][101] = { false };
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int n;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) fill(dist[i], dist[i] + n, -1);
	int cnt = 1, ans = 100000000;
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 1 && !vis[i][j]) {
				queue<pair<int, int>> q1;
				q1.push({ i,j });
				board[i][j] = cnt;
				vis[i][j] = true;
				dist[i][j] = 0;
				q.push({ i,j });
				while (!q1.empty()) {
					auto cur = q1.front(); q1.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (board[nx][ny] == 0 || vis[nx][ny]) continue;
						board[nx][ny] = cnt;
						vis[nx][ny] = true;
						dist[nx][ny] = 0;
						q1.push({ nx,ny });
						q.push({ nx,ny });
					}
				}
				cnt++;
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (board[nx][ny] == board[cur.first][cur.second]) continue;
			if (board[nx][ny] != 0) {
				ans = min(ans, dist[nx][ny] + dist[cur.first][cur.second]);
			}
			else {
				dist[nx][ny] = dist[cur.first][cur.second] + 1;
				board[nx][ny] = board[cur.first][cur.second];
				q.push({ nx,ny });
			}
		}
	}
	cout << ans;
}