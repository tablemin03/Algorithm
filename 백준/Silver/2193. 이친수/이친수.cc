#include <iostream>
#define ll long long
using namespace std;

ll pib[91] = { 0,1,1, };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 3; i < 91; i++) {
		pib[i] = pib[i - 2] + pib[i - 1];
	}
	int n; cin >> n;
	cout << pib[n];
}