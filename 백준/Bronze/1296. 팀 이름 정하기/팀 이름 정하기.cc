#include <bits/stdc++.h>
using namespace std;

int per[5];
int love[5];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    for(int i = 2; i < 4; i++) per[i] = 1;
    string name, team = "@@";
    cin >> name;
    for(int i = 0; i < name.size(); i++){
        if('L' == name[i]) {
            love[0]++;
        }
        else if('O' == name[i]){
            love[1]++;
        }
        else if('V' == name[i]){
            love[2]++;
        }
        else if('E' == name[i]){
            love[3]++;
        }
    }
    int n, nameSize = 0;
    cin >> n;

    while(n--){
        int arr[5];
        for(int i = 0; i < 4; i++) arr[i] = love[i];
        string s;
        cin >> s;
        if(team == "@@") team = s;
        for(int i = 0; i < s.size(); i++){
            if('L' == s[i]) {
                arr[0]++;
            }
            else if('O' == s[i]){
                arr[1]++;
            }
            else if('V' == s[i]){
                arr[2]++;
            }
            else if('E' == s[i]){
                arr[3]++;
            }
        }
        int tmp = 1;
        do{
            int t = 0;
            for(int i = 0; i < 4; i++){
                if(per[i] == 0) t += arr[i];
            }
            tmp *= t;
        }while(next_permutation(per, per + 4));
        tmp %= 100;
        if(nameSize <= tmp){
            if(nameSize == tmp){
                if(s < team) team = s;
            }
            else {
                nameSize = tmp;
                team = s;
            }
        }
    }
    cout << team;
}