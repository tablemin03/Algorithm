#include <bits/stdc++.h>
using namespace std;

string arr[155];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    string ret = "";
    char c = arr[0][0];
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(c == arr[i][0]) cnt++;
        else{
            cnt = 1;
            c = arr[i][0];
        }
        if(cnt == 5) ret += c;
    }
    if(ret == "") cout << "PREDAJA";
    else cout << ret;
}