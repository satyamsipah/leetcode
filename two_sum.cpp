class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int first = nums[i];
            int second = target - nums[i];
            if(s.find(second) != s.end()){
                ans.push_back(s[second]);
                ans.push_back(i);
            }
            s[nums[i]] = i;
        }
        return ans;
    }
};
