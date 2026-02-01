
/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int n; cin >> n;
    int array[n];
    ll sub = 0;
    for(int i = 0; i < n; i++){
      cin >> array[i];
      sub -= array[i];
    }
    cout << sub <<endl;

    return 0;
}