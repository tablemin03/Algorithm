#include <iostream>
#include <algorithm>
using namespace std;

int dp[1004];
int a[1004];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	fill(dp, dp + n, 1);
	for (int i = 0; i < n; i++) {
        dp[i] = a[i];
		for (int j = 0; j < i; j++) {
			if(a[j]<a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
		}
	}
	cout << *max_element(dp, dp + n);
}