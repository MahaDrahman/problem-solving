/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s; cin >>s;
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    //cout << s <<endl;
    string newstring = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] !='o' and s[i] != 'u' and s[i] != 'y'){
      
         newstring += s[i];
        }
    }
    //cout << newstring ;
    cout <<".";
    for(int i = 0; i < newstring.size() - 1; i++){
        cout << newstring[i] <<'.';
    }
    cout << newstring.back();
    return 0;
}