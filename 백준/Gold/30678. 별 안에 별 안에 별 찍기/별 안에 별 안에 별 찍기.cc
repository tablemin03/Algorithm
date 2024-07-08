#include <iostream>
#include <algorithm>
using namespace std;

char board[3500][3500];
void run(int n, int x, int y) {
	if (n == 1) {
		board[x][y + 2] = '*';
		board[x + 1][y + 2] = '*';
		for (int i = 2; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == 2) board[x + i][y + j] = '*';
				else if (i == 3 && 1 <= j && j <= 3) board[x + i][y + j] = '*';
				else if (i == 4) {
					if (j == 1 || j == 3) board[x + i][y + j] = '*';
				}
			}
		}
		return;
	}
	int dir = 1;
	for (int i = 1; i < n; i++) dir *= 5;
	for (int i = 0; i < 2; i++) run(n - 1, x + i * dir, y + 2 * dir);
	for (int i = 0; i < 5; i++) run(n - 1, x + 2 * dir, y + i * dir);
	for (int i = 1; i < 4; i++) run(n - 1, x + 3 * dir, y + i * dir);
	for (int i = 1; i < 4; i++) {
		if (i != 2) run(n - 1, x + 4 * dir, y + i * dir);
	}


}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	int dir = 1;
	for (int i = 1; i < n; i++) dir *= 5;
	for (int i = 0; i < 5 * dir; i++) fill(board[i], board[i] + 5 * dir, ' ');
	if (n != 0) {
		run(n, 0, 0);
		for (int i = 0; i < dir * 5; i++) {
			for (int j = 0; j < dir * 5; j++) cout << board[i][j];
			cout << "\n";
		}
	}
	else cout << '*';
}