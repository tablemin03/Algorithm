#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> v;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		string x = "";
		for (int j = i; j < s.size(); j++) x += s[j];
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (auto& c : v) cout << c << "\n";
}