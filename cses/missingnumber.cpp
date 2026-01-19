#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    int a[n],sum=0;
    for(int i=1; i<=n; i++){
     sum+=i;
    }
    //cout<<sum;
    for(int i=0; i<n-1; i++){
        cin>>a[i];
        sum-=a[i];
    }
    cout<<sum<<endl;
 
    }
