#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int a, b, c, perform = 0;
	cin >> a >> b >> c;
	perform = b / a * 3 * c;
	cout << perform;
}