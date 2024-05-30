#include <iostream>
#include <algorithm>
using namespace std;

int dp[100005][3];
int arr[100005][3];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int cnt = 1;
	while (true) {
		int n; cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < 3; j++) cin >> arr[i][j];
		dp[0][0] = 1001;
		dp[0][1] = arr[0][1];
		dp[0][2] = arr[0][1] + arr[0][2];
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				if (j == 0) dp[i][j] = min(dp[i - 1][j], dp[i - 1][j + 1]) + arr[i][j];
				else if (j == 1) dp[i][j] = min({ dp[i - 1][j - 1],dp[i - 1][j],dp[i - 1][j + 1],dp[i][j - 1] }) + arr[i][j];
				else dp[i][j] = min({ dp[i - 1][j - 1],dp[i - 1][j],dp[i][j - 1] }) + arr[i][j];
			}
		}
		cout << cnt++ << ". " << dp[n - 1][1] << "\n";
	}
}