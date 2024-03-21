#include <iostream>
using namespace std;

int arr[9];
int n, m;
void solve(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		arr[cnt] = i;
		solve(cnt + 1);
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	solve(0);
}