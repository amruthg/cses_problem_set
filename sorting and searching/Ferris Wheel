#include<bits/stdc++.h>
using namespace std;

int main(){

    //a key logic is instead of taking consecutive ones, 
    //take one from the beginning and one from the end.

    int n;
    long x;
    cin >> n >> x;
    vector<long long> p(n);
    
    int count=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int low =0,high=n-1;
    while(low<=high){
        if(p[low]+p[high]<=x){
            count++;
            low++;
            high--;
        }
        else if(p[low]+p[high]>x){
            high--;
            count++;
        }
    }

    cout<<count;
    return 0;
}
