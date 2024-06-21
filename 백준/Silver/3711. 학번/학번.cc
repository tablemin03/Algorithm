#include <bits/stdc++.h>
using namespace std;

int arr[305];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        fill(arr, arr + 305, -1);
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(n == 1) cout << 1 << "\n";
        else{
            int m = n;
            while(1){
                set<int> mod;
                bool pass = true;
                for(int i = 0; i < n; i++){
                    int curMod = arr[i] % m;
                    if(mod.find(curMod) == mod.end()) mod.insert(curMod);
                    else{
                        pass = false;
                        break;
                    }
                }
                if(pass) break;
                m++;
            }
            cout << m << "\n";
        }
    }
}