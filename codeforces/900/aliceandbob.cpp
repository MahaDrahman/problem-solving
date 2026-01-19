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
        int n, a; cin >> n >> a;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < a) l++;
        else if(v[i] > a ) r++;

    }
    if(l > r) cout  << a - 1 <<endl;
    else cout << a + 1 <<endl;
    }

    return 0;
}