#include <iostream>
#include <queue>
using namespace std;

string board[13];
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
int ret = 0;
void down() {
	for (int i = 0; i < 6; i++) {
		for(int j = 10; j >= 0; --j){
        int tmp = j;
        while(tmp<11&&board[tmp+1][i]=='.'){
          swap(board[tmp][i], board[tmp+1][i]);
          ++tmp;
        }
      }
	}
}
bool check(int x, int y) {
	bool visited[13][7];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 6; j++) visited[i][j] = false;
	}
	int cnt = 1;
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		char puyo = board[x][y];
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
			if (visited[nx][ny] || board[nx][ny] != puyo) continue;
			visited[nx][ny] = 1;
			q.push({ nx,ny });
			cnt++;
			if (cnt >= 4) {
				return true;
			}
		}
	}
	return false;
}
void bfs(int a, int b, bool (&vis)[13][7], bool &val) {
	val = check(a, b);
	queue<pair<int, int>> q;
	q.push({ a,b });
	vis[a][b] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		char puyo = board[x][y];
		if (val) board[x][y] = '.';
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
			if (vis[nx][ny] || board[nx][ny] != puyo || board[nx][ny] == '.') continue;
			vis[nx][ny] = 1;
			q.push({ nx,ny });
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 0; i < 12; i++) {
		cin >> board[i];
	}
	while (true) {
		bool vis[13][7];
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 6; j++) vis[i][j] = false;
		}
		bool escape = true;
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 6; j++) {
				if (board[i][j] != '.' && !vis[i][j]) {
					bool val = false;
					int tmp = ret;
					bfs(i, j, vis, val);
					if (val) escape = false;
				}
			}
		}
		if (escape) break;
		ret++;
		down();
	}
	cout << ret;
}