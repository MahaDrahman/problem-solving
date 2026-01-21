/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s1, s2; cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    if(s1 == s2){
        cout << 0 <<endl;
    }else if(s1 < s2){
        cout << -1 <<endl;
    }else{
        cout << 1 <<endl;
    }
    return 0;
}