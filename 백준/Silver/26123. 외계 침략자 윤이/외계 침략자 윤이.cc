#include <iostream>
#include <algorithm>
using namespace std;

int arr[300005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, d, maxi = 0;
	long long cnt = 0;
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[x]++;
		if (x > maxi) maxi = x;
	}

	for (int i = 0; i < d; i++) {
		cnt += arr[maxi];
		arr[maxi - 1] += arr[maxi];
		maxi--;
		if (maxi == 0) break;
	}

	cout << cnt;
}