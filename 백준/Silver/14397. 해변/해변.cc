#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 1, 0, -1};
int dyEven[] = {1, 1, 1, 0, -1, 0};
int dyOdd[] = {0, 1, 0, -1, -1, -1};
string board[52];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> board[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == '#'){
                if(i % 2 ==0){ // odd
                    for(int k = 0; k < 6; k++){
                        int nx = i + dx[k];
                        int ny = j + dyOdd[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(board[nx][ny] == '.') cnt++;
                    }
                }
                else{ // Even
                    for(int k = 0; k < 6; k++){
                        int nx = i + dx[k];
                        int ny = j + dyEven[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(board[nx][ny] == '.') cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
}