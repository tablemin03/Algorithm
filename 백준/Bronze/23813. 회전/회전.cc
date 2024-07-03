#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<char> v;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    cin >> s;

    ll ret = 0;
    for(int i = 0; i < s.size(); i++) v.push_back(s[i]);
    for(int i = 0; i < s.size(); i++){
        string k = "";
        for(int j = 0; j < s.size(); j++) k += v[j];
        ll num = stoi(k);
        ret += num;
        rotate(v.begin(), v.end() - 1, v.end());
    }
    cout << ret;
}