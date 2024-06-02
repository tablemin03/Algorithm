#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 0; i < 3; i++) {
		int h1, m1, s1, h2, m2, s2, h3 = 0, m3 = 0, s3 = 0;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		if (s2 - s1 < 0) {
			s3 += 60 + (s2 - s1);
			m3 -= 1;
		}
		else s3 += s2 - s1;
		if (m3 + m2 - m1 < 0) {
			m3 += 60 + (m2 - m1);
			h3 -= 1;
		}
		else m3 += m2 - m1;
		h3 += h2 - h1;
		cout << h3 << ' ' << m3 << ' ' << s3 << "\n";
	}
}