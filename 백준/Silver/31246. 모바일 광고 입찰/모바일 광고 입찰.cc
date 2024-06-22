#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, k;
    int cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x, y, cmp;
        cin >> x >> y;
        if(x >= y) cnt += 1;
        else pq.push(y - x);
    }
    int raise = 0;
    while(cnt < k){
        int x = pq.top();
        pq.pop();
        if(raise >= x) cnt++;
        else {
            raise += (x - raise);
            cnt++;
        }
    }
    cout << raise;
}