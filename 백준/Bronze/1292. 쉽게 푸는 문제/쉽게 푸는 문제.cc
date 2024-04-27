#include <iostream>
using namespace std;

long long arr[1005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 1; i < 1001;) {
		for (int j = 1; j < 1000; j++) {
			if (i > 1000) break;
			for (int k = 0; k < j; k++, i++) {
				if (i > 1000) break;
				arr[i] = arr[i - 1] + j;
			}
		}
	}
	int a, b;
	cin >> a >> b;
	cout << arr[b] - arr[a - 1];
}