#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int board[52][52];
vector<pair<int, int>> house;
vector<pair<int, int>> bbq;
int chicken[13]; // next_permutation 위한 배열
int n, m, ret = 2500;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 1) house.push_back({ i,j });
			else if (board[i][j] == 2) bbq.push_back({ i,j });
		}
	}
	for (int i = m; i < bbq.size(); i++) {
		chicken[i] = 1;
	}
	do {
		int dist[102];
		fill(dist, dist + house.size(), 2500);
		for (int i = 0; i < house.size(); i++) {
			for (int j = 0; j < bbq.size(); j++) {
				if (chicken[j] == 0) {
					int x = abs(house[i].first - bbq[j].first);
					int y = abs(house[i].second - bbq[j].second);
					dist[i] = min(dist[i], x + y);
				}
			}
		}
		int tmp = 0;
		for (int i = 0; i < house.size(); i++) {
			tmp += dist[i];
		}
		ret = min(ret, tmp);
	} while (next_permutation(chicken, chicken + bbq.size()));
	cout << ret;
}