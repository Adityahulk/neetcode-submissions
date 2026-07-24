class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int,int> number_count;
        for(int index = 0; index < nums.size(); index++){
            if(number_count.contains(nums[index])){
                return true;
            }
            number_count[nums[index]] = 1;
        }

        return false;
    }
};