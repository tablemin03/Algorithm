#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int mini, ret = 0;
    cin >> mini;
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        if(x < mini) mini = x;
        else if(x - mini > ret) ret = x - mini;
    }
    cout << ret;
}