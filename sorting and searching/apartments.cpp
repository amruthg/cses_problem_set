int main(){
    
    int n,m;
    long k;
    
    cin>>n>>m>>k;
    vector<long> a(n);
    vector<long> b(m);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0,j=0;
    int count=0;
    while(i<n and j<m){

        if(abs(a[i]-b[j])<=k){
            count++;
            j++;
            i++;
        }
        else if(a[i]-b[j] > k){
            j++;
        }
        else{
            i++;
        }
    }

    cout<<count;
    return 0;
    
}
