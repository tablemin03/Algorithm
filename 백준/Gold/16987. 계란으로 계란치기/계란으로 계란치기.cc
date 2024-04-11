#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt = 0;
int arr[10][2];
void solve(int x, int m) {
	if (x == n) {
		cnt = max(cnt, m);
		return;
	}
	if (arr[x][0] <= 0) solve(x + 1, m);
	else {
		for (int i = 0; i < n; i++) {
			if (arr[i][0] <= 0 || x == i) {
				if (i == n - 1) solve(x + 1, m);
				continue;
			}
			arr[i][0] -= arr[x][1];
			arr[x][0] -= arr[i][1];
			int k = 0;
			if (arr[i][0] <= 0) k++;
			if (arr[x][0] <= 0) k++;
			solve(x + 1, m + k);
			arr[i][0] += arr[x][1];
			arr[x][0] += arr[i][1];
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	solve(0, 0);
	cout << cnt;
}