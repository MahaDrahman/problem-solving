class Solution {
public:
    int singleNumber(vector<int>& nums) {
      sort(nums.begin(), nums.end());
       vector<int> vnew;
       for(auto x : nums){
        if(!vnew.empty() and vnew.back() == x){
            vnew.pop_back();
        }else{
            vnew.push_back(x);
        }
       }
       return vnew[0];
    }
};