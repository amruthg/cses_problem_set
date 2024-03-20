#include <bits/stdc++.h>
using namespace std;

int main() {

    //the min value that can possible for a block's max sum is max(array).

    //here we have to return the lowest value where every block value sum is < = value.

    //so until the lowest value from the max(array) no value satifies this condition.

    //from the lowest value all values satisfy this property.

    //this shift in the array can be calculated using binary search as it decreases the number 
    //of iterations significantly.

    int n,k;
    cin>>n>>k;
    int maxi=0;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
        maxi=max(input[i],maxi);
    }
    long long low=maxi;
    long long high=1e18;
    long long block_size=1e18;//this sum signifies the max block size;
    
    while(low<=high){
        long long mid = (low+high)/2;
        int blocks =1;
        long long sum =0;
        //counting the number of blocks for given sum.
        for(int i=0;i<n;i++){
            if(sum + input[i]> mid){
                blocks++;
                sum=0;
            }
            sum+=input[i];
        }
        //if number of blocks is more than sum has to be increased.
        if(blocks > k){
            low = mid + 1;
        }
        //if not we check if the sum cn be decreased further.
        else{
            if(mid < block_size){
                block_size = mid;
            }
            high = mid-1;
        }
    }
    cout<<block_size;
    return 0;
}
