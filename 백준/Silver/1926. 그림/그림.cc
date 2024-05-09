#include <iostream>
#include <queue>
using namespace std;

int map[502][502];
bool vis[502][502];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m, num = 0, maxi = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0 || vis[i][j] == 1) continue;
			int cnt = 0;
			queue<pair<int, int>> q;
			q.push({ i,j });
			vis[i][j] = 1;
			while (!q.empty()) {
				int x = q.front().first;
				int y = q.front().second;
				q.pop();
				cnt++;
				for (int k = 0; k < 4; k++) {
					int nx = x + dx[k];
					int ny = y + dy[k];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] == 0 && map[nx][ny] == 1) {
						q.push({ nx,ny });
						vis[nx][ny] = 1;
					}
				}
			}
			num++;
			if (maxi < cnt) maxi = cnt;
		}
	}
	cout << num << "\n" << maxi;
}