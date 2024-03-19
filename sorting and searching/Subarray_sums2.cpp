#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
  //here the map is used to maintain the count of number of prefixes whose sum is sum -x before the i'th index.
    long long sum=0,count=0;
    map<long long,int> m;
    m[0]++;//prefix of array of size 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        count+=m[sum-x];
        m[sum]++;
    }
    cout<<count; 
    return 0;
