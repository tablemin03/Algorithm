#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[3][11];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 3; i++) fill(arr[i], arr[i] + 10, 0);
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			if (s[0] == 'R') arr[0][s[1] - 48] += 1;
			else if (s[0] == 'Y') arr[1][s[1] - 48] += 1;
			else if (s[0] == 'B') arr[2][s[1] - 48] += 1;
		}
		bool cheater = false;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			int x = -1;
			if (s[0] == 'R') x = 0;
			else if (s[0] == 'Y') x = 1;
			else if (s[0] == 'B') x = 2;
			arr[x][s[1] - 48] -= 1;
			if (arr[x][s[1] - 48] < 0) cheater = true;
		}
		if (cheater) cout << "CHEATER\n";
		else cout << "NOT CHEATER\n";
	}
}