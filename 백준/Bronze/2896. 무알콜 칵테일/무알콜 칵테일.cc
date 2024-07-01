#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	double a, b, c;
	double i, j, k;
	cin >> a >> b >> c;
	cin >> i >> j >> k;

	double A = a / i;
	double B = b / j;
	double C = c / k;

	double min = A < B ? A : B;
	min = min < C ? min : C;

	cout << fixed << setprecision(6) << a - i * min << ' ' << b - j * min << ' ' << c - k * min;
}