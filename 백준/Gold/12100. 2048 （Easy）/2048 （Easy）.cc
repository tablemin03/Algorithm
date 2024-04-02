#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt = 0;
int board[22][22];
int board2[22][22];
void rotate() {
	int tmp[22][22];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tmp[i][j] = board2[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			board2[i][j] = tmp[j][n - 1 - i];
		}
	}
}
void tilt(int x) {
	while (x--) rotate();
	for (int i = 0; i < n; i++) {
		int tilted[22] = {};
		int idx = 0;
		for (int j = 0; j < n; j++) {
			if (board2[i][j] == 0) continue;
			if (tilted[idx] == 0) tilted[idx] = board2[i][j];
			else if (tilted[idx] == board2[i][j]) tilted[idx++] *= 2;
			else tilted[++idx] = board2[i][j];
		}
		for (int j = 0; j < n; j++) board2[i][j] = tilted[j];
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	for (int tmp = 0; tmp < 1024; tmp++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				board2[i][j] = board[i][j];
			}
		}
		int brute = tmp;
		for (int i = 0; i < 5; i++) {
			int dir = brute % 4;
			brute /= 4;
			tilt(dir);
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cnt = max(cnt, board2[i][j]);
			}
		}
	}
	cout << cnt;
}