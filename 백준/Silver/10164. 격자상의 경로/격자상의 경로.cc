#include <iostream>
using namespace std;

int board[17][17];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 0; i < 15; i++) board[0][i] = 1;
	for (int i = 1; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (j == 0) board[i][j] = 1;
			else board[i][j] = board[i - 1][j] + board[i][j - 1];
		}
	}

	int n, m, k;
	cin >> n >> m >> k;

	if (k == 0) {
		cout << board[n - 1][m - 1];
	}
	else {
		int y = k % m;
		int x;
		if (y == 0) {
			x = k / m - 1;
			y = m - 1;
		}
		else {
			x = k / m;
			y = k % m - 1;
		}
		int l = board[x][y];
		int r = board[n - x - 1][m - y - 1];
		cout << l * r;
	}
}