#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<vector<int>> dp(n, vector<int>(2)), arr(n, vector<int>(2));
		for (int j = 0; j < 2; j++) 
			for (int i = 0; i < n; i++) 
				cin >> arr[i][j];
		dp[0][0] = arr[0][0];
		dp[0][1] = arr[0][1];
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				if (i == 1) {
					if (j == 0) dp[i][j] = dp[0][1] + arr[i][j];
					else dp[i][j] = dp[0][0] + arr[i][j];
				}
				else if (j == 0) dp[i][j] = max(dp[i - 1][1], dp[i - 2][1]) + arr[i][j];
				else dp[i][j] = max(dp[i - 1][0], dp[i - 2][0]) + arr[i][j];
			}
		}
		cout << max(dp[n - 1][0], dp[n - 1][1]) << "\n";
	}
}