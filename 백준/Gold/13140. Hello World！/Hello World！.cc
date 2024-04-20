#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int alpha[10] = { 0,1,2,3,4,5,6,7,8,9 };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool answer = false;
	int n; cin >> n;
	do {
		if (alpha[2] == 0 || alpha[6] == 0) continue;
		int tmp = (alpha[2] + alpha[6]) * 10000 + (alpha[1] + alpha[4]) * 1000 + (alpha[3] + alpha[5]) * 100 + alpha[3] * 20 + alpha[4] + alpha[0];
		if (tmp == n) {
			answer = true;
			break;
		}
	} while (next_permutation(alpha, alpha + 10));
	if (answer) {
		cout << "  " << alpha[2] << alpha[1] << alpha[3] << alpha[3] << alpha[4] << "\n";
		cout << "+ " << alpha[6] << alpha[4] << alpha[5] << alpha[3] << alpha[0] << "\n";
		cout << "-------\n";
		if (n >= 100000) cout << ' ' << n;
		else cout << "  " << n;
	}
	else cout << "No Answer";
}