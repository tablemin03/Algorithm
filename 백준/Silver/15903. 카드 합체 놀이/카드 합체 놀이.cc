#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long long arr[1005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	priority_queue<long long, vector<long long>, greater<long long>> pq;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		pq.push(arr[i]);
	}
	while (m--) {
		long long a = pq.top(); pq.pop();
		long long b = pq.top(); pq.pop();
		pq.push(a + b);
		pq.push(a + b);
	}
	long long ret = 0;
	while (!pq.empty()) {
		ret += pq.top();
		pq.pop();
	}
	cout << ret;
}