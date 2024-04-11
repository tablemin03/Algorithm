#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int board[1000002];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	fill(board, board + f + 1, -1);
	queue<int> q;
	q.push(s);
	board[s] = 0;
	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (int dx : {u, -d}) {
			int nx = x + dx;
			if (nx<1 || nx>f) continue;
			if (board[nx] != -1 && board[nx] <= board[x] + 1) continue;
			board[nx] = board[x] + 1;
			q.push(nx);
		}
	}
	if (board[g] == -1) cout << "use the stairs";
	else cout << board[g];
}