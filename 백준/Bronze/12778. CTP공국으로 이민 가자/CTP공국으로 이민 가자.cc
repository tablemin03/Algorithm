#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int t;
	cin >> t;
	while (t--) {
		int n;
		char c;
		cin >> n >> c;
		if (c == 'C') {
			for (int i = 0; i < n; i++) {
				char k;
				cin >> k;
				cout << (int)(k - 64) << ' ';
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				int k;
				cin >> k;
				cout << alpha[k - 1] << ' ';
			}
		}
		cout << "\n";
	}
}