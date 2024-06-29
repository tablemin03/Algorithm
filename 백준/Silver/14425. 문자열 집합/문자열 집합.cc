#include <bits/stdc++.h>
using namespace std;

map<string, int> testMap;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        testMap[s] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(testMap.find(s) != testMap.end()) cnt++;
    }
    cout << cnt;
}