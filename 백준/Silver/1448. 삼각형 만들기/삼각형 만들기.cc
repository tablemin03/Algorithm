#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int cmp = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = 1; j < 3; j++){
            cmp += arr[i + j];
        }
        if(arr[i] < cmp) {
            cout << arr[i] + cmp;
            return 0;
        }
        cmp = 0;
    }
    cout << -1;
}