#include <iostream>
using namespace std;

int arr[11]={1,2,4};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=3;i<11;i++){
        arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
    }
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        cout<<arr[n-1]<<"\n";
    }
}