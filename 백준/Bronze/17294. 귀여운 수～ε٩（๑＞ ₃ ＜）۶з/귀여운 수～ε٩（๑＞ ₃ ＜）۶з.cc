#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;
	if (s.size() > 1) {
		int k = (s[0] - 48) - (s[1] - 48);
		bool correct = true;
		for (int i = 1; i < s.size(); i++) {
			if ((s[i - 1] - 48) - (s[i] - 48) != k) {
				correct = false;
				break;
			}
		}
		if (correct) cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
		else cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
	}
	else cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
}