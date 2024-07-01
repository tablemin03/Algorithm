#include <iostream>
using namespace std;

int jem[10];
int sta[10];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 0; i < 9; i++) cin >> jem[i];
	for (int i = 0; i < 9; i++) cin >> sta[i];

	bool sweep = false;
	int score_j = 0, score_s = 0;
	for (int i = 0; i < 9; i++) {
		score_j += jem[i];
        if (score_j > score_s) sweep = true;
		score_s += sta[i];
	}
	if (score_j < score_s && sweep) cout << "Yes";
	else cout << "No";

}