#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(1001);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,sum=0,tot=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.begin()+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        tot+=sum;
    }
    cout<<tot;
}