/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n; cin >> n;
    vector<int> lucky = {
        4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777
    };
    bool mahadi = false;
    for(auto x : lucky){
        if(n % x == 0){
            mahadi = true;
        }
    }
    if(mahadi) cout << "YES" <<endl;
    else cout << "NO" <<endl;

    return 0;
}