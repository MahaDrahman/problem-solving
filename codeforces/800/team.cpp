/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int t; cin >> t;
    int count = 0;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum > 1) count++;
    }
    cout << count << endl;

    return 0;
}