#include <bits/stdc++.h>
using namespace std;

map<string,int> schedule;
int Time[5] = {4, 6, 4, 10, 0};
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    while(n--){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 7; j++){
                string s;
                cin >> s;
                if(s[0] == '-') continue;
                if(schedule.find(s) == schedule.end()) schedule[s] = Time[i];
                else schedule[s] += Time[i];
            }
        }
    }
    int maxTime = schedule.begin()->second;
    int minTime = schedule.begin()->second;
    for(auto iter = schedule.begin(); iter != schedule.end(); iter++){
        maxTime = max(iter->second, maxTime);
        minTime = min(iter->second, minTime);
    }
    if(maxTime - minTime <= 12) cout << "Yes";
    else cout << "No";
}