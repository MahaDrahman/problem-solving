/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

   int n, m; cin >> n >> m;
   int count = 0;
   for(int i = 0; i <= n; i++){
      for(int j = 0; j <= m; j++ ){
         if(i * i + j == n and i + j * j == m){
            count++;
         }
      }
   }
   cout << count <<endl;

    return 0;
}