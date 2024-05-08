#include <iostream>
#define ll long long
using namespace std;

ll arr[101][10] = {
	{0},
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
};
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 3; i <= 100; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) arr[i][j] = arr[i - 1][j + 1];
			else if (j == 9) arr[i][j] = arr[i - 1][j - 1];
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
			}
			arr[i][j] = arr[i][j] % 1000000000;
		}
	}
	ll sum = 0;
	int n; cin >> n;
	for (int i = 1; i < 10; i++) {
		sum += arr[n][i];
	}
	sum = sum % 1000000000;
	cout << sum;
}