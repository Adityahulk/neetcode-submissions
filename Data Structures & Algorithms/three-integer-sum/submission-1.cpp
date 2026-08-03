class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer_list;
        map<vector<int>, bool> answer_hash;


        sort(nums.begin(), nums.end());

        for(int index=0; index<nums.size(); index++){

            int negative_sum = 0 - nums[index];
            int l = index + 1;
            int r = nums.size()-1;

            while(l < r){
                if(nums[l] + nums[r] == negative_sum){
                    vector<int> answers;
                    answers.push_back(nums[index]);
                    answers.push_back(nums[l]);
                    answers.push_back(nums[r]);
                    if(answer_hash[answers] == false) {
                        answer_list.push_back(answers);
                        answer_hash[answers] = true;
                    }
                    l++;
                    r--;
                } else if(nums[l] + nums[r] < negative_sum){
                    l++;
                } else {
                    r--;
                }
            }
        }

        return answer_list;
    }
};
