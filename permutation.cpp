#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, vector<vector<int>>& ans, int idx)
{
    // Base Case
    if(idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    // Loop
    for(int i = idx; i < nums.size(); i++)
    {
        // Swap
        swap(nums[idx], nums[i]);

        // Recursion
        solve(nums, ans, idx + 1);

        // Backtracking
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;

    solve(nums, ans, 0);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3,4};

    vector<vector<int>> ans = permute(nums);

    // Print all permutations
    for(auto v : ans)
    {
        for(int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

