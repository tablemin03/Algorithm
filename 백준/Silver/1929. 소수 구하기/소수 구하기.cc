#include <bits/stdc++.h>
using namespace std;

vector<bool> state(1000001, true); //배열<bool>은 하나당 1byte지만 벡터<bool>은 하나당 1bit이기 때문에 많이 최적화 된다
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    state[1] = false;
    for(int i = 2; i*i <= m; i++){
        if(!state[i]) continue;
        for(int j = i*i; j <= m; j += i)
            state[j] = false;
    }
    for(int i = n; i <= m; i++)
        if(state[i]) cout << i << "\n";
}