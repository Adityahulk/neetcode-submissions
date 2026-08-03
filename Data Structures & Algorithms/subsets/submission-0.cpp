class Solution {
public:
    void dfs(int index, vector<int> subs, vector<int> nums, vector<vector<int>>& ans){

        if(index == nums.size()){
            ans.push_back(subs);
            return;
        }

        dfs(index+1, subs, nums, ans);

        subs.push_back(nums[index]);

        dfs(index+1, subs, nums, ans);

        subs.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> subs;

        dfs(0, subs, nums, ans);

        return ans;
    }
};
