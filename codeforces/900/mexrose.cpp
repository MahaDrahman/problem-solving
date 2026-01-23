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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<int> freq(n + 1, 0);
    for(auto x : v){
       if(x >= 0 and x <= n){
        freq[x]++;
       }
    }
    int missing = 0;
    for(int i = 0; i < k; i++){
        if(freq[i] == 0){
            missing++;
        }
    }
    int extra_k = freq[k];
    cout << max(extra_k, missing) <<endl;
    }

    return 0;
}