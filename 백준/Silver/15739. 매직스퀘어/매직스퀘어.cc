#include <bits/stdc++.h>
using namespace std;

int board[105][105];
int arr[10005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
            arr[board[i][j]]++;
        }
    }
    int magic = n * (n * n + 1) / 2;
    bool pass = true;
    for(int i = 1; i <= n * n; i++){
        if(arr[i] != 1) {
            pass = false;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            tmp += board[i][j];
        }
        if(tmp != magic) pass = false;
        if(!pass) break;
    }
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            tmp += board[j][i];
        }
        if(tmp != magic) pass = false;
        if(!pass) break;
    }
    int tmp = 0;
    for(int i = 0; i < n; i++) tmp += board[i][i];
    if(tmp != magic) pass = false;
    tmp = 0;
    for(int i = 0; i < n; i++) tmp += board[n - 1 - i][i];
    if(tmp != magic) pass = false;
    if(pass) cout << "TRUE";
    else cout << "FALSE";
}