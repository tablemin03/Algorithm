#include <iostream>
#define ll long long
using namespace std;

long long pib[10005] = { 0,1, };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 2; i <= n; i++) {
		pib[i] = pib[i - 2] + pib[i - 1];
	}
	cout << pib[n];
}