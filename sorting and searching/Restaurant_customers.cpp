#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b;
    cin>>n;
    vector<pair<int,int>> times;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        times.push_back({a,1});
        times.push_back({b,-1});
    }

    sort(times.begin(),times.end());

    int curr_ppl =0;
    int max_ppl=0;
    for(auto t : times){
        curr_ppl += t.second;
        max_ppl = max(curr_ppl,max_ppl);
    }

    cout<<max_ppl<<endl;
    return 0;

}
