#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

vector<tuple<int, int, int, string>> v;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int a, b, c;
		cin >> s >> a >> b >> c;
		v.push_back({ -a,b,-c,s });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) cout << get<3>(v[i]) << "\n";
}