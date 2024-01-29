#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    multiset<long> tickets;     //using a multiset because it always element in sorted after removal or addition too.
    long t;
    for(int i=0;i<n;i++){
        cin>>t;
        tickets.insert(t);    
    }
    for(int i=0;i<m;i++){
        cin>>t;
        auto it = tickets.upper_bound(t);       //finds the first element >= given number in multiset
        if(it==tickets.begin()){
            cout<<-1<<endl;                     //if that number is the 1st element no required number.
        }
        else{
            cout<<*(--it)<<endl;                //cout the required number
            tickets.erase(it);                  //remove the number from the multiset.
        }

        
    }
    
    return 0;

}
