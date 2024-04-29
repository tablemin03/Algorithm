#include <iostream>
using namespace std;

int board[52][52];
bool vis[52][52];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m, x, y, dir, cnt = 0;
	cin >> n >> m;
	cin >> x >> y >> dir;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> board[i][j];
	}
	while (true) {
		if (!vis[x][y]) {
			vis[x][y] = 1;
			cnt++;
		}
		bool chk = false;
		for (int i = 0; i < 4; i++) {
			dir += 3;
			dir %= 4;
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nx][ny] == 0 && !vis[nx][ny]) {
				x = nx;
				y = ny;
				chk = true;
				break;
			}
		}
		if (chk) continue;
		dir += 2;
		dir %= 4;
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m || board[nx][ny] == 1) break;
		x = nx;
		y = ny;
		dir += 2;
		dir %= 4;
	}
	cout << cnt;
}