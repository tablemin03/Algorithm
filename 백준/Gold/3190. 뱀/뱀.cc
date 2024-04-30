#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int board[102][102];
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
queue<pair<int, char>> q;
deque<pair<int, int>> dq;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		board[x - 1][y - 1] = 5;
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		int x;
		char s;
		cin >> x >> s;
		q.push({ x,s });
	}
	int time = 0, dir = 0, x = 0, y = 0;
	dq.push_back({ 0,0 });
	while (true) {
		time++;
		int nx = x + dx[dir];
		int ny = y + dy[dir]; //머리
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) break;
		if (board[nx][ny] == 1) break;
		if (board[nx][ny] != 5) {
			board[dq.back().first][dq.back().second] = 0;
			dq.pop_back();
		}
		board[nx][ny] = 1;
		dq.push_front({ nx,ny });
		x = nx; 
		y = ny;
		if (!q.empty()) {
			if (q.front().first == time) {
				char d = q.front().second;
				q.pop();
				if (d == 'D') dir = (dir + 1) % 4;
				else dir = (dir + 3) % 4;
			}
		}
	}
	cout << time;
}