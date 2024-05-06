#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int sum = 0, mins = 100;
	bool correct = false;
	for (int i = 0; i < 7; i++) {
		int x;
		cin >> x;
		if (x % 2 == 1) {
			correct = true;
			sum += x;
			if (x < mins) mins = x;
		}
	}
	if (correct) cout << sum << "\n" << mins;
	else cout << -1;
}