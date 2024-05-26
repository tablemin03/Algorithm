#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	int cmp = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x == 1) cmp += 1;
		else cmp -= 1;
	}
	if (cmp > 0) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
}