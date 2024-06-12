#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int k; cin >> k;
    for(int i = 1; i <= k; i++){
        int n, s, d, repay = 0;
        cin >> n >> s >> d;
        int dis, val, maxDis;
        maxDis = s * d;
        for(int j = 0; j < n; j++){
            cin >> dis >> val;
            if(dis <= maxDis) repay += val;
        }
        cout << "Data Set " << i << ":\n" << repay << "\n\n";
    }
}