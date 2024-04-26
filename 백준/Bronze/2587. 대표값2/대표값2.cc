#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v(5);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int sum = 0, mid, mean;
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		sum += v[i];
	}
	mean = sum / 5;
	sort(v.begin(), v.begin() + 5);
	mid = v[2];
	cout << mean << "\n" << mid;
}