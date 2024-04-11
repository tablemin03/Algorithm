#include <iostream>
using namespace std;

int board[2200][2200];
int cnt[3];

bool check(int x, int y, int n) {
	int a = board[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (board[i][j] != a) return false;
		}
	}
	return true;
}
void f(int x, int y, int n) {
	if (check(x, y, n)) {
		cnt[board[x][y] + 1] += 1;
		return;
	}
	int z = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			f(x + i * z, y + j * z, z);
		}
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
	f(0, 0, n);
	cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];
}