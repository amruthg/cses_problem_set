#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<long> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    //kadanes algorithm
    int s=0;
    int start=0,end=0;
    long max_so_far = INT_MIN;
    long max_ending_here = 0;

    for(int i=0;i<n;i++){
        max_ending_here +=x[i];

        if(max_so_far < max_ending_here){
            max_so_far=max_ending_here;
            start =s;
            end =i;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
            s = i+1;
        }
    }

    cout<<max_so_far<<endl;
    return 0;
}
