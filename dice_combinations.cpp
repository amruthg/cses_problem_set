#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //idea
    //dp[x]=dp[x-1]+dp[x-2]+dp[x-3]+dp[x-4]+dp[x-5]+dp[x-6]
    //top-down approach

    vector<int> dp(n+1,0);
    dp[0]=1;
    long x=1e9+7;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=6 and i-j>=0;j++){
            dp[i]+=dp[i-j];
            dp[i]=dp[i]%x;
        }
    }
    cout<<dp[n]<<endl;
}