/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s; cin >> s;
    sort(s.begin(), s.end());
    s.erase(remove(s.begin(), s.end(),'+' ) ,s.end());
    //cout << s <<endl;
    string newstring = "";
    for(int i = 0; i < s.size(); i++){
        newstring += s[i];
        if(i != s.size() - 1){
            newstring += '+';
        }
    }
    cout << newstring <<endl;

    return 0;
}