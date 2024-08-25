#include <iostream>
#include <algorithm>
using namespace std;

char board[2300][2300];
void stars(int n, int x, int y) {
	if (n == 1) {
		board[x][y] = '*';
		return;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;
			stars(n / 3, x + i * (n / 3), y + j * (n / 3));
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) fill(board[i], board[i] + n, ' ');
	stars(n, 0, 0);
	for (int i = 0; i < n; i++) {
		cout << board[i] << "\n";
	}
}