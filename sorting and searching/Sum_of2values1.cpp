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
    //we can use a boolean array but that will give us a very 
    //big array(not feasible).

    map<int , int> value_to_find;
    for(int i=0;i<n;i++){

        if(value_to_find.count(x-a[i])){
            cout<< i+1 << " " << value_to_find[x-a[i]]<<endl;
            return 0;
        }
        now put the key value in the unorder pair as value and index.
        value_to_find[a[i]]=i+1;

    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
