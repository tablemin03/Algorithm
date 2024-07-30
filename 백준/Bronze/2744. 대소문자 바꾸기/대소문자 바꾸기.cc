#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if ('a' <= s[i] && s[i] <= 'z') s[i] -= 32;
		else if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
	}
	cout << s;
}