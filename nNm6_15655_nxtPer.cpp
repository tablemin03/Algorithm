#include <iostream>
#include <algorithm>
using namespace std;

int com[10];
int arr[10];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = m; i < n; i++) {
		com[i] = 1;
	}
	do {
		for (int i = 0; i < n; i++) {
			if (com[i] == 0) cout << arr[i] << ' ';
		}
		cout << "\n";
	} while (next_permutation(com, com + n));
}