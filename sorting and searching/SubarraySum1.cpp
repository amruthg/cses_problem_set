#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long x;
    cin>>n>>x;
    vector<long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long sum=0;
    int l=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>x){
            sum-=arr[l++];
        }
        if(sum==x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
