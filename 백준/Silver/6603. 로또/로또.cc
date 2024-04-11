#include <iostream>
#include <algorithm>
using namespace std;

int arr[15];
int num[15];
int k, s;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (;;) {
		cin >> k;
		if (k == 0) break;
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		for (int i = 6; i < k; i++) {
			num[i] = 1;
		}
		do {
			for (int i = 0; i < k; i++) {
				if (num[i] == 0) cout << arr[i] << ' ';
			}
			cout << "\n";
		} while (next_permutation(num, num + k));
		cout << "\n";
	}
}