#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m; cin >> n >> m;
	string s[10];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		reverse(s[i].begin(), s[i].begin() + m);
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << "\n";
	}
}