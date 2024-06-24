#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
string board[205];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> board[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 'E' || board[i][j] == 'I'){
                for(int k = 0; k < 9; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(nx < 0 || ny < 0 || nx >= n|| ny >= m) continue;
                    if(board[nx][ny] == 'N' || board[nx][ny] == 'S'){
                        nx += dx[k];
                        ny += dy[k];
                        if(nx < 0 || ny < 0 || nx >= n|| ny >= m) continue;
                        if(board[nx][ny] == 'T' || board[nx][ny] == 'F'){
                            nx += dx[k];
                            ny += dy[k];
                            if(nx < 0 || ny < 0 || nx >= n|| ny >= m) continue;
                            if(board[nx][ny] == 'P' || board[nx][ny] == 'J') cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}