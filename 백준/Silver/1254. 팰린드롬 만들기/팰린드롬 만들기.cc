#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalin(string st) {
	bool correct = true;
	for (int i = 0; i < st.size() / 2; i++) {
		if (st[i] != st[st.size() - 1 - i]) {
			correct = false;
		}
	}
	if (correct) return true;
	else return false;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	string s, tmp;
	int out = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		tmp = s.substr(i, s.size() - i);
		if (isPalin(tmp)) {
			out = s.size() + i;
			break;
		}
	}
	cout << out;
}