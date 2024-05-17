#include <iostream>
using namespace std;

int arr[1005][2];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, w, L;
	cin >> n >> w >> L;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][1];
		arr[i][0] = 0;
	}
	int time = 1;
	int maxw = 0;
	int sidx = 0, eidx = 0;
	while (arr[n - 1][0] != w) {
		time++;
		if (maxw + arr[eidx][1] <= L && eidx <= n) {
			maxw += arr[eidx][1];
			eidx++;
		}
		for (int i = sidx; i < eidx; i++) arr[i][0]++;
		if (arr[sidx][0] == w) {
			maxw -= arr[sidx][1];
			sidx++;
		}
	}
	cout << time;
}