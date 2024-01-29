#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    long a,b;
    vector<pair<long,long>> shows;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        //this is one way to make a pair
        shows.push_back({b,a});
        //the other way is make_pair()
    }
    sort(shows.begin(),shows.end());
    long current=0;
    int count=0;
    for(auto it: shows){
        if(it.second>=current){
            count++;
            current=it.first;
        }
    }

    cout<<count;
    return 0;
}
