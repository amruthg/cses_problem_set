#include <bits/stdc++.h>
using namespace std;

//declare a data structure to store indices as well as ranges.
struct range{

    int l,r,index;
    //modifying the bool operator such that sort based on l values, if l values are same then do so on r values.
    bool operator < (const range &other) const
    {
        if(l==other.l)
            return r>other.r;
        return l < other.l;
    }
};

int main(){

    int n;
    cin>>n;
    vector<range> in(n);
    //you can also use bool for such cases.
    vector<bool> contains(n);
    vector<bool> contained(n);
    for(int i=0;i<n;i++){

        cin>>in[i].l;
        cin>>in[i].r;
        in[i].index = i;
    }
    sort(in.begin(),in.end());
    //putting max value as min as possible
    int max_end = 0;
    //now if a range above this is larger than the present range then the present range is contained
    for(int i=0;i<n;i++){
        if(in[i].r<=max_end)
            contained[in[i].index] = true;
        max_end = max(max_end,in[i].r);
    }
    //putting min value as max as possible
    int min_end=INT32_MAX;
    //now if a range above this is smaller than the present range then the present range is contained
    for(int i=n-1;i>=0;i--){
        if(in[i].r>=min_end)
            contains[in[i].index] = true;
        min_end = min(min_end,in[i].r);
    }

    for(int i=0;i<n;i++){
        cout<<contains[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<contained[i]<<" ";
    }

    return 0;
}
