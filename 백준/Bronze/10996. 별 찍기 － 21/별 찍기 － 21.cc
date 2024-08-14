#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int j = 0; j < n; j++) {
		for (int i = 1; i <= n; i += 2) {
			if (i == 1) cout << '*';
			else cout << " *";
		}
		cout << "\n";
		for (int i = 2; i <= n; i += 2) {
			cout << " *";
		}
		cout << "\n";
	}
}