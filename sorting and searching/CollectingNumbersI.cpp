#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]-1]=i;//a[i]-1 as indices lie from 0 to n-1. 
    }
    int ans=1;//as there will be atleast traversal in case of sorted array.
    for(int i=1;i<n;i++){
        //if there is an increment in the indices then they will be covered in 1 iteration.
        // else they will be covered in seperate iterations
        if(b[i]<b[i-1]){
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
