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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        map <int,int> freq;
    for(auto x : v){
        freq[x]++;
    }
    priority_queue <pair<int, int>> pq;
    for(auto elements : freq){
        int val = elements.first , count = elements.second;
        pq.push(make_pair(count, val));
    }
    int alive = n;
    while(pq.size() > 1){
        auto[count1, val1] = pq.top();
        pq.pop();
        auto[count2, val2] = pq.top();
        pq.pop();
        count1--;
        count2--;
        alive -= 2;
        if(count1 > 0) pq.push({count1, val1});

        if(count2 > 0) pq.push({count2, val2});
    }
    cout << alive <<endl;
    }

    return 0;
}