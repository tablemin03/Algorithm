#include <iostream>
#include <algorithm>
using namespace std;

int triangle[505][505];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++) cin >> triangle[i][j];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) triangle[i][j] += triangle[i - 1][1];
			else  if (j == i) triangle[i][j] += triangle[i - 1][j - 1];
			else triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
		}
	}
	int mx = 0;
	for (int i = 1; i <= n; i++) mx = max(mx, triangle[n][i]);
	cout << mx;
}