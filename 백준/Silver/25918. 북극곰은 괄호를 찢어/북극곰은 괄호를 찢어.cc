#include <iostream>
#include <stack>
using namespace std;

stack<char> st;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, date = 1, nDate = 1;
	string s;
	cin >> n;
	cin >> s;
	
	bool correct = false;
	if (s[0] == '(') correct = true;
	st.push(s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (st.empty()) {
			st.push(s[i]);
			nDate = 1;
		}
		else if (st.top() == '(') {
			if (s[i] == '(') {
				nDate++;
				st.push(s[i]);
			}
			else {
				nDate--;
				st.pop();
			}
		}
		else {
			if (s[i] == '(') {
				nDate--;
				st.pop();
			}
			else {
				nDate++;
				st.push(s[i]);
			}
		}
		if (nDate > date) date = nDate;
	}
	if (st.empty()) {
		cout << date;
	}
	else cout << -1;
}