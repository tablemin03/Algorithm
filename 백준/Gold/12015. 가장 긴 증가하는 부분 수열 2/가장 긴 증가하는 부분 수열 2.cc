#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int v[1000001];
int arr[1000001];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	arr[0] = v[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[cnt - 1] < v[i]) arr[cnt++] = v[i];
		else {
			arr[lower_bound(arr, arr + cnt, v[i]) - arr] = v[i];
		}
	}
	cout << cnt;
}