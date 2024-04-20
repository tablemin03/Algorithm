#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			for (int r = 0; r < 10; r++) {
				for (int e = 0; e < 10; e++) {
					for (int h = 1; h < 10; h++) {
						for (int w = 1; w < 10; w++) {
							for (int d = 0; d < 10; d++) {
								if ((o + d + 20 * l + 100 * (l + r) + 1000 * (e + o) + 10000 * (h + w) == n)) {
									if (o != l && o != r && o != e && o != h && o != w && o != d && l != r && l != e && l != h && l != w && l != d && r != h && r != w && r != d && r != e && e != h && e != w && e != d && h != w && h != d && w != d) {
										cout << "  " << h << e << l << l << o << " \n"; //모든 변수가 서로 달라야함
										cout << "+ " << w << o << r << l << d << " \n";
										if (100000 <= n) {
											cout << "------- \n " << n;
											return 0;
										}
										cout << "------- \n  " << n;
										return 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "No Answer";
}