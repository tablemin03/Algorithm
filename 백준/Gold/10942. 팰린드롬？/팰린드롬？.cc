#include <bits/stdc++.h>
using namespace std;

int arr[2005];
int pal[2005][2005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    cin >> m;
    for(int i = 1; i <= n; i++){
        pal[i][i] = 1;
        if(arr[i-1] == arr[i]) pal[i-1][i] = 1;
    }
    
    for(int gap = 2; gap < n; gap++){
        for(int i = 1; i <= n - gap; i++){
            int s = i, e = i + gap;
            if(arr[s] == arr[e] && pal[s + 1][e - 1]) pal[s][e] = 1;
        }
    }
    while(m--){
        int s, e;
        cin >> s >> e;
        cout << pal[s][e] << "\n";
    }
}