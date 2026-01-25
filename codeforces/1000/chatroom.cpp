/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s; cin >> s;
    string find = "hello";
    int count = 0;
    for(auto c : s){
       if(c == find[count]){
        count++;
       }
    }
    if(count == 5) cout  << "YES" <<endl;
    else cout << "NO" <<endl;

    return 0;
}