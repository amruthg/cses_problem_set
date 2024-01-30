#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long x;
    cin>>n>>x;
    vector<long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<long,int>> pair;
    for(int i=0;i<n;i++){
        pair.push_back({a[i],i});    
    }
    sort(pair.begin(),pair.end());
    int l=0,r=n-1;
    while(l<r){
        if(pair[l].first+pair[r].first==x){
            cout << pair[l].second+1 << " " << pair[r].second+1 << endl;
            return 0;

        }
        else if(pair[l].first+pair[r].first<x){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
