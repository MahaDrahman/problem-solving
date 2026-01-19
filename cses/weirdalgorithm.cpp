#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll int n; cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else{
            n=n*3+1;
        }
        cout<<n<<" ";
    }cout<<endl;
    }
