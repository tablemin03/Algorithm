#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v(10002);
vector<int> dp(10002);
int n;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;
	for (int i = 1; i < n + 1; i++) cin >> v[i];
	dp[1] = v[1]; dp[2] = dp[1] + v[2];
	for (int i = 3; i < n + 1; i++) {
		dp[i] = max({ dp[i - 3] + v[i - 1] + v[i],dp[i - 2] + v[i],dp[i - 1] });
	}
	cout << dp[n];
}