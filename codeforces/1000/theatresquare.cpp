/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    ll n, m , a; cin >> n >> m >> a;
   cout<<(((n + a - 1) / a) * ((m + a - 1) / a)) <<endl;
    return 0;
}