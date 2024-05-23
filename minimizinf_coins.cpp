#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x;cin>>x;
    vector<int> c(n+1);
    for(int i=0;i<=n;i++){
        cin>>c[i];
    }
    vector<int> k(x+1,0);
    vector<int> first(x+1,0);
    for(int i=0;i<=x+1;i++){
        if(i==0){    
            k[i]=0;
            continue;
        }
        k[i]=INT32_MAX;
        for(auto t:c){
            if(i-t>=0 and k[i-t]+1<k[i]){
                first[i]=t;
                k[i]=k[i-t]+1;
            }
        }

    }

    cout<<k[x]<<endl;
    return 0;
}