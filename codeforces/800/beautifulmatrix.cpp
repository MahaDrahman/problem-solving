/* Practice is the only shortcut */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  cout.tie(nullptr);

    int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    int x;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 1){
           x = abs(i - 2) + abs(j - 2);
           //cout << i <<" " << j ;
           
           }
        }
        //cout << endl;
    }
    cout << x <<endl;

    return 0;
}