#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int pre[10];
int n, m;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	do {
		bool escape = false;
		for (int i = 0; i < m; i++) {
			if (pre[i] != arr[i]) {
				escape = true;
				break;
			}
		}
		if (!escape) continue;
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
			pre[i] = arr[i];
		}
		cout << "\n";
	} while (next_permutation(arr, arr + n));
}