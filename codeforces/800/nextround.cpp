/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n, t; cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x = v[t - 1];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(x <= v[i] and v[i] != 0){
            count++;
        }
    }
    cout << count <<endl;

    return 0;
}