/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n; cin >> n;
    if( n == 2 or n == 3) cout << "NO SOLUTION" <<endl;
    else{
     for(int i = 2; i <= n; i+= 2){
        cout << i << " ";
     }
     for(int i = 1; i <= n; i+= 2){
        cout << i << " ";
     }
    } 

    return 0;
}