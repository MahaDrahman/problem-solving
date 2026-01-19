/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a, b, n; cin >> a >> b >> n;
        if(1ll * b * n <= a or b >= a){
        cout << 1 <<endl;

        }else{
            cout << 2 << endl;
        }
    }

    return 0;
}