#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, ans;
	cin >> n;
	ans = n % 8;
	if (ans == 1) cout << 1;
	else if (ans == 2 || ans == 0) cout << 2;
	else if (ans == 3 || ans == 7) cout << 3;
	else if (ans == 4 || ans == 6) cout << 4;
	else cout << 5;
}