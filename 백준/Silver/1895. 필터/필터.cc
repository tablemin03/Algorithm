#include <bits/stdc++.h>
using namespace std;

int image[42][42];
int filtered[40][40];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> image[i][j];
        }
    }
    for(int i = 0; i < n -2; i++){
        for(int j = 0; j < m - 2; j++){
            vector<int> v;
            for(int a = 0; a < 3; a++){
                for(int b = 0; b < 3; b++) v.push_back(image[i + a][j + b]);
            }
            sort(v.begin(), v.end());
            filtered[i][j] = v[4];
        }
    }
    int t, cnt = 0;
    cin >> t;
    for(int i = 0; i < n -2; i++){
        for(int j = 0; j < m -2; j++){
            if(filtered[i][j] >= t) cnt++;
        }
    }
    cout << cnt;
}