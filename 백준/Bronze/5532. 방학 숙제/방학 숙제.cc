#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	int math, kor, day;
	if (b % d == 0) math = b / d;
	else math = b / d + 1;
	if (a % c == 0) kor = a / c;
	else kor = a / c + 1;
	day = max(math, kor);
	cout << l - day;
}