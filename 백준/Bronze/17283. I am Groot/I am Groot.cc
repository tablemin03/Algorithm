#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int L, r, ret = 0;
	cin >> L >> r;
	while (1) {
		L = L * r / 100;
		if (L <= 5) break;
		v.push_back(L);
	}
	int m = 2;
	for (int i = 0; i < v.size(); i++) {
		ret += m * v[i];
		m *= 2;
	}
	cout << ret;
}