#include <iostream>
#include <algorithm>
using namespace std;

int n, m, t, r, c;
int board[42][42];
int sticker[12][12];
bool check(int x, int y) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (board[x + i][y + j] == 1 && sticker[i][j] == 1) return false;
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (sticker[i][j] == 1 && board[x + i][y + j] == 0) board[x + i][y + j] = 1;
		}
	}
	return true;
}
void rotate() {
	int tmp[12][12];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			tmp[i][j] = sticker[i][j];
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			sticker[i][j] = tmp[r - 1 - j][i];
		}
	}
	swap(r, c);
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> r >> c;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> sticker[i][j];
			}
		}
		for (int a = 0; a < 4; a++) {
			bool escape = false;
			for (int i = 0; i <= n - r; i++) {
				if (escape) break;
				for (int j = 0; j <= m - c; j++) {
					if (check(i, j)) {
						escape = true;
						break;
					}
				}
			}
			if (escape) break;
			rotate();
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1) cnt += 1;
		}
	}
	cout << cnt;
}