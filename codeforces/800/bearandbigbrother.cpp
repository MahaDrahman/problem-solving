/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int a, b; cin >> a >> b;
    int count = 0;
    while(a <= b){
        count++;
       a *= 3;
       b *= 2;
       
    }
    cout << count <<endl;

    return 0;
}