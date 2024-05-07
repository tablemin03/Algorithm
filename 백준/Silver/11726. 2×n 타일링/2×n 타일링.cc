#include <iostream>
using namespace std;

int arr[1002] = { 0,1,2, };
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 3; i < 1001; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
		arr[i] = arr[i] % 10007;
	}
	int n; cin >> n;
	cout << arr[n];
}