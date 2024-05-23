#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main(){

    long long n;
    cin>>n;

    long long x;
    cin>>x;

    vector<long long> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    vector<long long> ways(x+1);
    //ways[x]=sigma ways[x-t] where t belongs to coins
    ways[0]=1;

    for(int i=1;i<=x;i++){
        for(auto t:coins){
            if(i-t>=0){
                ways[i]=(ways[i]+ways[i-t]) % mod;
                
            }   
        }  
    }

    cout<<ways[x]<<endl;
    return 0;
}