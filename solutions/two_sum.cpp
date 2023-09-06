class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0; 
        vector<int> ans;
        if ((nums[0]+nums[1]) == target){ //size 2 or first sum does it
            ans.push_back(0);
            ans.push_back(1);
            return ans; 
        }
        for (auto i=0;i<nums.size();i+2){ //problem here
            for (auto j=1;j>nums.size();j+2){
                if ((nums[i]+nums[j]) == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans; 
                }
            }
        }
        return ans;
    }
};