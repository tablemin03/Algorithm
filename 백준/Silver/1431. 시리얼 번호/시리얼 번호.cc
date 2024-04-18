#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<pair<string, int>> arr;
bool cmp(pair<string, int>& v1, pair<string, int>& v2) {
	if (v1.first.size() != v2.first.size()) return v1.first.size() < v2.first.size();
	else if (v1.second != v2.second) return v1.second < v2.second;
	else return v1.first < v2.first;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int j = 0; j < s.size(); j++) {
			if (isdigit(s[j])) cnt += s[j] - 48;
		}
		arr.push_back({ s,cnt });
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i].first << "\n";
	}
}