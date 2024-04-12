#include <iostream>
using namespace std;

int arr1[1000002];
int arr2[1000002];
int out[2000005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> arr2[i];
	}
	int idx1 = 0, idx2 = 0;
	for (int i = 0; i < a + b; i++) {
		if ((arr1[idx1] < arr2[idx2] && idx1 < a) || idx2 >= b) out[i] = arr1[idx1++];
		else out[i] = arr2[idx2++];
	}
	for (int i = 0; i < a + b; i++) cout << out[i] << ' ';
}