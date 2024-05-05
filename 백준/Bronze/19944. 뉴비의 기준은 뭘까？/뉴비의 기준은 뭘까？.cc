#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m; cin >> n >> m;
	if (m <= 2) cout << "NEWBIE!";
	else if (m > n) cout << "TLE!";
	else cout << "OLDBIE!";
}