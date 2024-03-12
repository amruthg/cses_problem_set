#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x=0;
    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    while(!q.empty()){
        for(int i=0;i<1;i++){
            int x=q.front();
            q.pop();
            q.push(x);
        }
        x=q.front();
        q.pop();
        cout<<x<<" ";    
    }

    return 0;
}
