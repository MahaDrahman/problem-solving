/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    string s; cin >> s;
    set<char> st;
    for(auto c : s){
        st.insert(c);
    }
    if(st.size() % 2 == 0){
        cout << "CHAT WITH HER!" <<endl;
    }else{
        cout << "IGNORE HIM!" <<endl;
    }

    return 0;
}