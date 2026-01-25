#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        if( n % 2 == 0){
            cout << -1 <<endl;
        }else{
            for(int i = n; i > 0 ;i--){
                cout << i << " ";
            }
           cout << endl;
        }
    }

    return 0;
}