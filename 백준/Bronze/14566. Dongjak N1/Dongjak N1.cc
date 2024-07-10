#include <bits/stdc++.h>
using namespace std;

int stop[5005];
int gap[32800005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stop[i];
    }
    sort(stop, stop + n);
    int mini = 32800000;
    for(int i = 1; i < n; i++){
        gap[stop[i] - stop[i - 1]] += 1;
        mini = min(mini, stop[i] - stop[i - 1]);
    }
    cout << mini << ' ' << gap[mini];
}