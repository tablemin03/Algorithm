#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A(51);
vector<int> B(51);
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}
	sort(A.begin(), A.begin() + n);
	sort(B.begin(), B.begin() + n, greater<int>());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += A[i] * B[i];
	}
	cout << sum;
}