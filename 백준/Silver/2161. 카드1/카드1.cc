#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		int x;
		x = q.front();
		q.pop();
		cout << x << ' ';
		if (q.empty()) break;
		x = q.front();
		q.pop();
		q.push(x);
	}
}