#include <iostream>
using namespace std;

int n = 1000000;
int arr[1000001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 2; i < n; i++) {
		arr[i] = i;
	}
	for (int i = 2; i < n; i++) {
		if (arr[i] == 0) continue;
		for (int j = 2*i; j < n; j+=i) {
			arr[j] = 0;
		}
	}
	int m = 0, k = 0;
	cin >> m >> k;
	for (int i = m; i < k + 1; i++) {
		if (arr[i] == 0) continue;
		cout << arr[i] << "\n";
	}
}