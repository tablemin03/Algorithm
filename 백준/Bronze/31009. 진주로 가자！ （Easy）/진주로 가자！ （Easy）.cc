#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    int jin;
    for(int i = 0; i < n; i++){
        string s;
        int k;
        cin >> s >> k;
        if(s == "jinju") jin = k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int cnt = n - (upper_bound(v.begin(), v.end(), jin) - v.begin());
    cout << jin << "\n" << cnt;
}