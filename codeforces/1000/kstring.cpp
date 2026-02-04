/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    map<char, int> freq;

    for(auto x : s){
      freq[x]++;
    }
    int num;
    bool mahadi = true;
    for(auto &x : freq){
        num = x.second;
        if(num % n != 0){
          mahadi = false;
          break;
        }
    }
    if(!mahadi){
      cout << -1 <<endl;
    }else{
          string base = "";

        for(auto &x : freq){
            base += string(x.second / n, x.first);
        }
        for(int i = 0; i < n; i++){
            cout << base;
        }
        cout << endl;
    
    }
    return 0;
}