class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 1){return 1;}
        int result{};
        int anchor{};
        
        for(int i = 1; i < nums.size() ; ++i)
        {
            if(i > 0 && nums[i-1] >= nums[i]) { anchor = i;}
            result = std::max(result, i - anchor + 1);
        }
        return result;
    }
};
