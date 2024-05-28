#include <iostream>
using namespace std;

int pib[1000005] = { 0,1,2,3, };
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 4; i <= 1000000; i++) {
		pib[i] = pib[i - 1] + pib[i - 2];
		pib[i] %= 15746;
	}
	int n; cin >> n;
	cout << pib[n];
}