#include <iostream>
#include <vector>
using namespace std;

vector<int> v(10);
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int n, k, cnt = 0; cin>>n>>k;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=n-1;i>=0;i--){
        if(k/v[i]>0){
            cnt+=k/v[i];
            k=k%v[i];
        }
    }
    cout<<cnt;
}