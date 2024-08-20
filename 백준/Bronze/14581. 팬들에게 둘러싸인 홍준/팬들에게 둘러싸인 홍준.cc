#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;
	string fan = ":fan:";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 1 && i == 1) cout << ':' << s << ':';
			else cout << fan;
		}
		cout << '\n';
	}
}