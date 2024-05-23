#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    vector<long long> x(n+1);
    x[0]=0;
    for(int i=1;i<=n;i++){
        if(i<=9 and i>=1){
            x[i]=1;
            continue;
        }
        set<int> digits;
        long long k=i;
        while(k){
            digits.insert(k%10);
            k=k/10;
        }
        x[i]=1000000000;
        for(auto t:digits){
            if(i-t>=0 and x[i-t]+1<x[i]){
                x[i]=x[i-t]+1;
            }
            
        }
    }

    cout<<x[n]<<endl;
}