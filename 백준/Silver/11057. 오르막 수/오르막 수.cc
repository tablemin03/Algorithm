#include <iostream>
using namespace std;

int arr[1005][12];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	arr[1][0] = 10;
	for (int i = 1; i < 11; i++) arr[1][i] = 1;
	for (int i = 2; i < 1001; i++) {
		arr[i][1] = arr[i - 1][0];
		arr[i][0] += arr[i - 1][0];
		for (int j = 2; j < 11; j++) {
			arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
			arr[i][0] += arr[i][j];
		}
		arr[i][0] %= 10007;
	}
	int output = arr[n][0] >= 0 ? arr[n][0] : 10007 + arr[n][0];
	cout << output;
}