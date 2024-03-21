#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
int pre[9];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	do {
		bool flag = false;
		for (int i = 0; i < m; i++) {
			if (pre[i] != arr[i]) {
				flag = true;
				break;
			}
		}
		if (!flag) continue;
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
			pre[i] = arr[i];
		}
		cout << "\n";
	} while (next_permutation(arr, arr + n));
}