/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
    	int n, m, p, q; cin >> n >> m >> p >>q;
    	if(n % p == 0){
    		if(m == (n / p) * q){
    			cout << "Yes" <<endl;
    		}else{
    			cout << "No" <<endl; 
    		}
    	}else{
    		cout << "Yes" <<endl;
    	}
    }

    return 0;
}