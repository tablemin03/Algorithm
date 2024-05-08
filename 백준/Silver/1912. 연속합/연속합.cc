#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001][2] = { 0,0 };
int arr[100001] = { 0 };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	dp[0][0] = arr[0];
	dp[0][1] = arr[0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][0], 0) + arr[i];
		dp[i][1] = max(dp[i][0], dp[i - 1][1]);
	}
	cout << max(dp[n - 1][0], dp[n - 1][1]);
}