#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	long long r, c, n;
	cin >> r >> c >> n;
	long long ret = r % n ? r / n + 1 : r / n;

	ret *= c % n ? c / n + 1: c / n;
	cout << ret;
}