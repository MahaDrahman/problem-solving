/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n; cin >> n;
    int count = 0;
    while(n--){
        string s; cin >> s;
        if(s[1] == '+'){
            count++;
        }else{
            count--;
        }
    }
    cout << count <<endl;

    return 0;
}