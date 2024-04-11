#include <iostream>
using namespace std;

int cnt = 0;
int n;
bool row[15];
bool dia[40];
bool dia2[40];
void func(int cur) {
	if (cur == n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (row[i] || dia[cur + i] || dia2[cur - i + n - 1]) continue;
		row[i] = 1;
		dia[cur + i] = 1;
		dia2[cur - i + n - 1] = 1;
		func(cur + 1);
		row[i] = 0;
		dia2[cur - i + n - 1] = 0;
		dia[cur + i] = 0;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	func(0);
	cout << cnt;
}