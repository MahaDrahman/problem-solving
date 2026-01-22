/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s; cin >> s;
    string s2(1, s.front());

    transform(s2.begin(), s2.end(), s2.begin(),::toupper);
    cout << s2 << s.substr(1) <<endl;

    return 0;
}