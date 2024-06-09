#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100002];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int cnt = 0;
	int maxcnt = 0;
	long long maxval = -(1ll << 62) - 1;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long val = arr[0];
	cnt++;
	for (int i = 1; i < n; i++) {
		if (val == arr[i]) cnt++;
		else {
			if (maxcnt < cnt) {
				maxcnt = cnt;
				maxval = val;
			}
			val = arr[i];
			cnt = 1;
		}
	}
	if (cnt > maxcnt) maxval = val;
	cout << maxval;
}