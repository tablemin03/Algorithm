#include <iostream>
using namespace std;

int pPib[1000005] = { 0,1,1,2, };
int nPib[1000005] = { 0,1,-1 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 3; i <= 1000000; i++) {
		nPib[i] = (nPib[i - 2] - nPib[i - 1]) % 1000000000;
		pPib[i] = (pPib[i - 1] + pPib[i - 2]) % 1000000000;
	}
	int ret = n >= 0 ? pPib[n] : nPib[-n];
	if (ret > 0) cout << 1 << "\n" << ret;
	else if (ret < 0) cout << -1 << "\n" << -ret;
	else cout << 0 << "\n" << ret;
}