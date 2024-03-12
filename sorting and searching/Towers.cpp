#include<bits/stdc++.h>
using namespace std;
//whenever you have to find the upperboundand and have a case of the array size changing
//use binary search + vector or multiset + upper_bound();
int main(){

    int n;
    cin>>n;
    vector<int> k;
    long x=0;
    for(int i=0;i<n;i++){
        cin>>x;
        int low =0,high=k.size();
        while(low<high){
            int mid = (low+high)/2;
            if(k[mid]>x) high=mid;
            else low=mid+1;
        }
        if(low==k.size())   k.push_back(x);
        else    k[low]=x;
    }

    cout<<k.size();
    return 0;
}
