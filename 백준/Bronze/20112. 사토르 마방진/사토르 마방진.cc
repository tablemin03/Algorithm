#include <iostream>
#include <string>
using namespace std;

string square[102];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> square[i];
	}
	bool correct = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (square[i][j] != square[j][i]) correct = false;
		}
	}
	if (correct) cout << "YES";
	else cout << "NO";
}