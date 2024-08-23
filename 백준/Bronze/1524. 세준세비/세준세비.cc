#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		priority_queue<int> q1;
		priority_queue<int> q2;
		cin.ignore();
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			q1.push(-x);
		}
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			q2.push(-x);
		}

		int pl = n + m;
		for (int i = 1; i < pl; i++) {
			if (!q1.empty() && !q2.empty()) {
				if (-q1.top() >= -q2.top()) {
					q2.pop();
					m--;
				}
				else {
					q1.pop();
					n--;
				}
			}
			else {
				if (q1.empty()) {
					q2.pop();
					m--;
				}
				else {
					q1.pop();
					n--;
				}
			}
		}

		if (m < n) cout << "S\n";
		else cout << "B\n";
	}
}