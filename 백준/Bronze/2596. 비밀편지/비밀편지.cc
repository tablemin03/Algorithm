#include <iostream>
#include <string>
using namespace std;

string alpha[9] = { "000000","001111","010011","011100","100110","101001","110101","111010", };
string a = "ABCDEFGH";
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	string s, ret = "";
	cin >> s;
	for (int i = 0; i < n; i++) {
		bool check = false;
		for (int j = 0; j < 8; j++) {
			int ok = 0;
			for (int k = 0; k < 6; k++) {
				if (alpha[j][k] != s[i * 6 + k]) ok++;
				if (ok > 1) break;
			}
			if (ok <= 1) {
				check = true;
				ret += a[j];
				break;
			}
		}
		if (!check) {
			ret = i + 49;
			break;
		}
	}
	cout << ret;

}