#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10];
int num[10];
void solve(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		num[cnt] = arr[i];
		if (tmp == arr[i]) continue;
		solve(cnt + 1);
		tmp = arr[i];
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	solve(0);
}