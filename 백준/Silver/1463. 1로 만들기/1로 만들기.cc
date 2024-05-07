#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001]={0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1]+1;
        if(i%3==0) dp[i]=min(dp[i/3]+1,dp[i]);
        if(i%2==0) dp[i]=min(dp[i/2]+1,dp[i]);
    }
    cout<<dp[n];
}