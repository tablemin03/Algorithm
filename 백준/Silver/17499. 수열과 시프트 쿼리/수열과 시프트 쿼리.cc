#include <bits/stdc++.h>
using namespace std;

int arr[200005];
int main(){
    ios::sync_with_stdio(0); cin.tie();

    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int idx = 0;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        if(x == 1){
            int a, b;
            cin >> a >> b;
            arr[(idx + n + a - 1) % n] += b;
        }
        else if(x == 2){
            int a;
            cin >> a;
            idx = (idx + n - a) % n;
        }
        else if(x == 3){
            int a;
            cin >> a;
            idx = (idx + n + a) % n;
        }
    }
    for(int i = 0; i < n; i++) cout << arr[(idx + i) % n] << " ";
}