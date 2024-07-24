#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);

	long long a, b;
	long long mini, maxi;
	cin >> a >> b;
	mini = a < b ? a : b;
	maxi = a > b ? a : b;
	cout << (maxi - mini + 1) * (mini + maxi) / 2;
}