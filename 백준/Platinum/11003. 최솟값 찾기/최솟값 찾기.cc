#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, L;
	cin >> n >> L;
	deque<pair<int, int>> dq;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		while (!dq.empty() && x < dq.back().second) {
			dq.pop_back();
		}

		dq.push_back({ i,x });
		while (dq.front().first < i - L + 1) {
			dq.pop_front();
		}
		cout << dq.front().second << ' ';
	}
}