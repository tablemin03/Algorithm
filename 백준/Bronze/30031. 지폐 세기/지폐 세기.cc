#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, tot = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == 136) tot += 1000;
		else if (x == 142) tot += 5000;
		else if (x == 148) tot += 10000;
		else if (x == 154) tot += 50000;
	}
	cout << tot;
}