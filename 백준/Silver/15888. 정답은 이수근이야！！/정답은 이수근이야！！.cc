#include <iostream>
#include <cmath>
using namespace std;

int arr[] = { 2, 4, 8, 16, 32, 64 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int arr[3];
	int a, b, c;
	cin >> a >> b >> c;
	if ((b * b - 4 * a * c) <= 0) cout << "둘다틀렸근";
	else {
		int k = 0;
		for (int i = -100; i <= 100; i++) {
			if (a * i * i + b * i + c == 0) arr[k++] = i;
		}
		if (k != 2) cout << "둘다틀렸근";
		else {
			int leesugen = 0;
			for (int i = 0; i < k; i++) {
				if (arr[i] == 2 || arr[i] == 4 || arr[i] == 8 || arr[i] == 16 || arr[i] == 32 || arr[i] == 64) continue;
				cout << "정수근";
				return 0;
			}
			cout << "이수근";
		}
	}
}