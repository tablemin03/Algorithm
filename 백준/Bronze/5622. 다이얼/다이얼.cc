#include <iostream>
using namespace std;

int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;
	int ret = 0;
	for (int i = 0; i < s.size(); i++) {
		ret += arr[s[i] - 65];
	}
	cout << ret;
}