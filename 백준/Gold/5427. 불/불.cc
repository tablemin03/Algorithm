#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int board[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int tc; cin >> tc;
	for (int test = 0; test < tc; test++) {
		int x, y;
		queue<pair<int, int>> Q1 = {}, Q2 = {};
		bool escape = false;
		cin >> y >> x;
		for (int i = 0; i < x; i++) {
			fill(dist1[i], dist1[i] + y, 0);
			fill(dist2[i], dist2[i] + y, 0);
		}
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				char a;
				cin >> a;
				if (a == '#') {
					board[i][j] = -1;
				}
				else {
					if (a == '@') {
						Q2.push({ i,j });
						dist2[i][j] = 1;
					}
					else if (a == '*') {
						Q1.push({ i,j });
						dist1[i][j] = 1;
					}
					board[i][j] = 0;
				}
			}
		}
		while (!Q1.empty()) {
			auto cur = Q1.front(); Q1.pop();
			for (int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
				if (dist1[nx][ny] > 0 || board[nx][ny] == -1) continue;
				dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
				Q1.push({ nx,ny });
			}
		}
		while (!Q2.empty()) {
			auto cur = Q2.front(); Q2.pop();
			for (int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx < 0 || nx >= x || ny < 0 || ny >= y) {
					cout << dist2[cur.first][cur.second];
					escape = true;
				}
                if (escape) break;
				if (board[nx][ny] == -1 || dist2[nx][ny] > 0) continue;
				if (dist1[nx][ny] != 0 && dist1[nx][ny] <= dist2[cur.first][cur.second] + 1) continue;
				dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
				Q2.push({ nx,ny });
			}
		}
		if (!escape) cout << "IMPOSSIBLE";
		cout << "\n";
	}
}