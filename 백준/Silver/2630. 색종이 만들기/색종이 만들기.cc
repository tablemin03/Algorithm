#include <iostream>
using namespace std;

int board[130][130];
int white = 0;
int blue = 0;
bool check(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (board[x][y] != board[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void run(int x, int y, int n) {
	if (!check(x, y, n)) {
		run(x, y, n / 2);
		run(x + n / 2, y, n / 2);
		run(x, y + n / 2, n / 2);
		run(x + n / 2, y + n / 2, n / 2);
	}
	else {
		if (board[x][y] == 1) blue++;
		else white++;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	run(0, 0, n);
	cout << white << "\n" << blue;
}