#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	string s1, s2;
	int mi, ma;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '6') s1[i] = '5';
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == '6') s2[i] = '5';
	}
	mi = stoi(s1) + stoi(s2);
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '5') s1[i] = '6';
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == '5') s2[i] = '6';
	}
	ma = stoi(s1) + stoi(s2);
	cout << mi << ' ' << ma;
}