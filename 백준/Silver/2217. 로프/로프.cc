#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v(100000);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.begin() + n);
	int MaX = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		sum = v[i] * (n - i);
		MaX = max(MaX, sum);
	}
	cout << MaX;
}