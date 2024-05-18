#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);
		if (s == "END") break;
		reverse(s.begin(), s.end());
		cout << s << "\n";
	}
}