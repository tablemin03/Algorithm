#include <iostream>
#include <algorithm>
using namespace std;

int arr[17][2];
int dp[17];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		if (arr[i][0] + i > n) continue;
		dp[i] = arr[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (arr[j][0] + j >= i + 1 || arr[i][0] + i > n) continue;
			dp[i] = max(dp[i], dp[j] + arr[i][1]);
		}
	}
	cout << *max_element(dp, dp + n);
}