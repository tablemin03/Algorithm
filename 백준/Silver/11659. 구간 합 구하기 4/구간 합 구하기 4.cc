#include <iostream>
#include <vector>
using namespace std;

vector<int> v(100001);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> v[i + 1];
        v[i+1] += v[i];
	}
	for (int i = 0; i < m; i++) {
		int low, high, sum = 0;
		cin >> low >> high;
		sum = v[high] - v[low - 1];
		cout << sum << "\n";
	}
}