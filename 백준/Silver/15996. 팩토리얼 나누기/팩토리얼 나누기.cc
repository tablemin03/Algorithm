#include <iostream>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	ll n, a;
	cin >> n >> a;
	if (n == 0) n = 1;
	ll m = 0, div = n;
	for (;;) {
		div = div / a;
		m += div;
		if (div == 0) break;
	}
	cout << m;
}