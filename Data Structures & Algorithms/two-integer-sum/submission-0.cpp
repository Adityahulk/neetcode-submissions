class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> value_frequency;

        for(int index=0; index<nums.size(); index++){

            if(value_frequency.contains(target - nums[index])){
                return {value_frequency[target-nums[index]], index};
            }

            value_frequency[nums[index]] = index;
            
        }
    }
};
