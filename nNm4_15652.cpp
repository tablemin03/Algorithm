#include <iostream>
using namespace std;

int n, m;
int arr[10] = { 1, };
void solve(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}
	int st;
	if (cnt == 0) st = 1;
	else st = arr[cnt - 1];
	for (int i = st; i <= n; i++) {
		arr[cnt] = i;
		solve(cnt + 1);
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	solve(0);
}