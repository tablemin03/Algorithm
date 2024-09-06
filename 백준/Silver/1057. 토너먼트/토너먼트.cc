#include <iostream>
using namespace std;

int n, kim, lim, cnt;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> kim >> lim;
	while (n != 0) {
		kim = kim % 2 == 0 ? kim / 2 : (kim + 1) / 2;
		lim = lim % 2 == 0 ? lim / 2 : (lim + 1) / 2;
		cnt++;
		if (kim == lim) {
			cout << cnt;
			break;
		}
	}
}