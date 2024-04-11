#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, cnt = 0; cin >> n;
	
	for (int i = 0; i < n; i++) {
		stack<char> st;
		string s;
		cin >> s;
		for (auto c : s) {
			if (!st.empty()) {
				if (st.top() == c) st.pop();
				else st.push(c);
			}
			else st.push(c);
		}
		if (st.empty()) cnt++;
	}
	cout << cnt;
}