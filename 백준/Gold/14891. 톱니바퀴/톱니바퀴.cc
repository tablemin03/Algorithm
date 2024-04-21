#include <iostream>
#include <string>
#include <queue>
using namespace std;

int gear[4][9];
int gearNum[4]; // 기어의 현재 오른쪽 번호
void rotate(int num, int dir) {
	bool vis[4]; // 기어가 이미 돌았는지
	for (int i = 0; i < 4; i++) vis[i] = false;
	queue<pair<int, int>> q;
	q.push({ num,dir });
	vis[num] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int d = q.front().second;
		q.pop();
		if (x != 3) { // 오른쪽에 영향
			if (gear[x][gearNum[x]] != gear[x + 1][(gearNum[x + 1] + 4) % 8] && !vis[x + 1]) {
				q.push({ x + 1,-d });
				vis[x + 1] = 1;
			}
		}
		if (x != 0) { // 왼쪽에 영향
			if (gear[x][(gearNum[x] + 4) % 8] != gear[x - 1][gearNum[x - 1]] && !vis[x - 1]) {
				q.push({ x - 1,-d });
				vis[x - 1] = 1;
			}
		}
		if (d == 1) gearNum[x] = (gearNum[x] + 7) % 8;
		else gearNum[x] = (gearNum[x] + 1) % 8;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 0; i < 4; i++) {
		string s; cin >> s;
		for (int j = 0; j < 8; j++) gear[i][j] = s[j] - 48;
		gearNum[i] = 2;
	}
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num, dir;
		cin >> num >> dir;
		rotate(num - 1, dir);
	}
	int score = 1;
	int tot = 0;
	for (int i = 0; i < 4; i++) {
		if (gear[i][(gearNum[i] + 6) % 8] == 1) tot += score;
		score *= 2;
	}
	cout << tot;
}