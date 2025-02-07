class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size()-1;
        int currSum = 0;
        vector<int> ans;
        
        while(st < end) {
            currSum = numbers[st] + numbers[end];
            if(currSum == target) {
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            } else if(currSum > target) {
                end--;
            } else {
                st++;
            }
        }
        return {};
    }
};
