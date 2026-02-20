class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> present (nums.size() + 2 , false);
        for(auto x : nums){
            if(x >= 0 and x <= nums.size()){
                present[x] = true;
            }
        }
        int mex = 0;
        while(present[mex]) mex++;
        return mex;
    }
};


/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int ans = n;
       for(int i = 0; i < n; i++){
        ans ^= i ^ nums[i];
       }
       return ans ;
    }
}; */
