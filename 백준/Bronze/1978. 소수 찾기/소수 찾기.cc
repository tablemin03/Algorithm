#include <iostream>
using namespace std;

int arr[1001]={0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=1;i<1001;i++){
        arr[i]=i;
    }
    for(int i=2;i<1001;i++){
        for(int j=2;j<i;j++){
            if(arr[i]%j==0) {
                arr[i]=0;
                break;
            }
        }
    }
    int arr1[101]={0};
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        for(int j=2;j<1001;j++){
            if(arr[j]==arr1[i]) cnt++; 
        }
    }
    cout<<cnt;
}