#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<long> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    //we are not calculating averages here, 
    //because average doesnt give the middle most value
    long median = p[(n-1)/2];
    long cost = 0;
    for(int i=0;i<n;i++){
        cost+=abs(median-p[i]);
    }

    cout<<cost<<endl;
    return 0;
}
