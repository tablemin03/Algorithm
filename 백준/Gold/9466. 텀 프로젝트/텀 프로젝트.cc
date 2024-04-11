#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002];
int state[100002];
int n;
void run(int x) {
	int cur = x;
	while (true) {
		state[cur] = x;
		cur = arr[cur];
		if (state[cur] == x) {
			while (state[cur] != -1) {
				state[cur] = -1;
				cur = arr[cur];
			}
			return;
		}
		else if (state[cur] != 0) return;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int cnt = 0;
		fill(state + 1, state + n + 1, 0);
		for (int j = 1; j <= n; j++) {
			cin >> arr[j];
		}
		for (int j = 1; j <= n; j++) {
			if (state[j] == 0) run(j);
		}
		for (int j = 1; j <= n; j++) {
			if (state[j] != -1) cnt++;
		}
		cout << cnt << "\n";
	}
}