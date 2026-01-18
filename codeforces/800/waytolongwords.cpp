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
        string s; cin >> s;
        int x = s.size();
        if(x > 10){
            cout << s[0] << x-2 <<s.back() <<endl;
        }else{
            cout << s <<endl;
        }
        }

    return 0;
}