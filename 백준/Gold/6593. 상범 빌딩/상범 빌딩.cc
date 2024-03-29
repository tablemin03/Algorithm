#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	while (true) {
		char board[31][31][31];
		int dist[31][31][31];
		int dx[] = { -1,1,0,0,0,0 };
		int dy[] = { 0,0,-1,1,0,0 };
		int dz[] = { 0,0,0,0,-1,1 };
		int L, R, C, l, r, c;
		queue<tuple<int, int, int>> q;
		cin >> L >> R >> C;
		if (L == 0 && R == 0 && C == 0) break;
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < R; j++) {
				for (int k = 0; k < C; k++) {
					cin >> board[i][j][k];
					if (board[i][j][k] == '.') dist[i][j][k] = -1;
					else if (board[i][j][k] == 'S') {
						q.push({ i,j,k });
						dist[i][j][k] = 0;
					}
					else if (board[i][j][k] == 'E') {
						l = i;
						r = j;
						c = k;
						dist[i][j][k] = -1;
					}
					else dist[i][j][k] = 0;
				}
			}
			cin.ignore();
		}

		while (!q.empty()) {
			auto cur = q.front(); q.pop();
			int x, y, z;
			tie(z, x, y) = cur;
			for (int i = 0; i < 6; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				int nz = z + dz[i];
				if (nx < 0 || nx >= R || ny < 0 || ny >= C || nz < 0 || nz >= L) continue;
				if (dist[nz][nx][ny] != -1 && dist[nz][nx][ny] <= dist[z][x][y] + 1) continue;
				dist[nz][nx][ny] = dist[z][x][y] + 1;
				q.push({ nz,nx,ny });
			}
		}
		if (dist[l][r][c] > 0) cout << "Escaped in " << dist[l][r][c] << " minute(s).\n";
		else cout << "Trapped!\n";
	}
}