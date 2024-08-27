#include <bits/stdc++.h>
using namespace std;

vector<short> v;
int n, jin, outLen;
long long k;
string s;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    v.reserve(n); // 메모리, 시간 최적화
    for(int i = 0; i < n; i++){
        cin >> s >> k;
        if(s == "jinju") {
            jin = k;
        }
        if(k > 1000) {
            outLen++;
        }
        else {
            v.push_back(k);
        }
    }
    sort(v.begin(),v.end());
    cout << jin << "\n";
    cout << (v.size() - (upper_bound(v.begin(), v.end(), jin) - v.begin()) + outLen);
    return 0;
}