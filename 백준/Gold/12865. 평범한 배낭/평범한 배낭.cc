// Dynamic Programming
#include <iostream>
#include <algorithm>
using namespace std;

int dp[105][100005];
int arr[105][2];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> arr[i][0] >> arr[i][1];
	for (int j = 1; j <= k; j++) {
		for (int i = 1; i <= n; i++) {
			if (arr[i][0] <= j) {
				dp[i][j] = max(arr[i][1] + dp[i - 1][j - arr[i][0]], dp[i - 1][j]);
				//중복 방지를 위해 dp[i-1][j-arr[i][0]을 사용
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[n][k];
}