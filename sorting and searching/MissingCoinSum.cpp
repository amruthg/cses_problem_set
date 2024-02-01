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
    long x=1;

    for(int i=0;i<n;i++){
        if(x<p[i]){
            break;
            //tells us that that there is a sum less than x.
        }
        x+=p[i];
    }
    cout<<x<<endl;
    return 0;
}
