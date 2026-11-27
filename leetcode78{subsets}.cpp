class Solution {
public:

    void subset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& result)
    {
        if(i == nums.size())
        {
            result.push_back(ans);
            return;
        }

        // Include
        ans.push_back(nums[i]);
        subset(nums, ans, i + 1, result);

        // Exclude
        ans.pop_back();
        subset(nums, ans, i + 1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> ans;

        subset(nums, ans, 0, result);

        return result;
    }
};