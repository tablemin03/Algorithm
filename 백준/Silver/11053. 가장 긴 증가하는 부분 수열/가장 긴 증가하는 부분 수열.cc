#include <iostream>
#include <vector>
using namespace std;

vector<int> v(1001);
vector<int> dp(1001);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
        dp[i] = 1;
		for (int j = i-1; 0 <= j; j--) {
			if (v[j] < v[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
        ans = max(ans, dp[i]);
	}
	cout << ans;
}