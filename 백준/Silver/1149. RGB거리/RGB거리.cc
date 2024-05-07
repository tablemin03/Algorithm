#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][3] = { 0,0,0 };
int arr[1001][3] = { 0,0,0 };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	for (int i = 0; i < 3; i++) {
		dp[0][i] = arr[0][i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int mini = min(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
			dp[i][j] = mini + arr[i][j];
		}
	}
	cout << min({ dp[n - 1][0],dp[n - 1][1],dp[n - 1][2] });
}