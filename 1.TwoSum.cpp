class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int newtarget = target - nums[i];
            if(res.count(newtarget)){
                return {res[newtarget],i};
            }
            res[nums[i]] = i;
        }
        return {}; 
    }
};