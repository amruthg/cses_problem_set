#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    long long sum=0;
    long long count=0;
   //the concept used here is similiar to subarray sum2 but instead we are comparing the values of remainders instead of prefix sums.
    int rem=0;
    map<long long,int> m;
    m[0]++;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        rem=((sum%n)+n)%n;
        count+=m[rem];
        m[rem]++;
    }
    cout<<count;
    return 0;
}
