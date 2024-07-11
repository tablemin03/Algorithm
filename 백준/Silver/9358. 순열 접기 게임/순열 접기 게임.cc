#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    int cnt = 1;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(;;){
            if(n == 2) break;
            int k = n - 1;
            if(n % 2 == 1) n = n / 2 + 1;
            else n = n / 2;
            for(int i = 0; i < n; i++) v[i] = v[i] + v[k - i];
        }
        if(v[0] > v[1]) cout << "Case #" << cnt << ": Alice\n";
        else cout << "Case #" << cnt << ": Bob\n";
        cnt++;
    }
}