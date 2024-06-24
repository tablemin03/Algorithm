#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005][1005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m, hide;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cin >> hide;
    for(int i = 1; i < m; i++) arr[0][i] += arr[0][i-1];
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j == 0) arr[i][j] += arr[i-1][j];
            else arr[i][j] += min(arr[i-1][j], arr[i][j-1]);
        }
    }
    if(arr[n-1][m-1] > hide) cout << "NO";
    else cout << "YES\n" << arr[n-1][m-1];
}