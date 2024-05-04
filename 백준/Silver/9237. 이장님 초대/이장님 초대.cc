#include <iostream>
#include <algorithm>
using namespace std;

int arr[100005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());
	int mx = 0, cnt = 1;
	for (int i = 0; i < n; i++) {
		cnt++;
		int tmp = cnt + arr[i];
		mx = max(mx, tmp);
	}
	cout << mx;
}