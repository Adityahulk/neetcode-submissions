class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector <vector <int>> three_sum_list;
        map <vector<int>, bool> hash_map;

        for(int index=0; index<nums.size(); index++){
            int negative_sum = 0 - nums[index];

            map<int, int> map_sum;

            for(int itr_index=index+1; itr_index<nums.size(); itr_index++){

                if(map_sum[negative_sum - nums[itr_index]]){
                    vector <int> three_sum;
                    three_sum.push_back(nums[index]);
                    three_sum.push_back(negative_sum - nums[itr_index]);
                    three_sum.push_back(nums[itr_index]);

                    sort(three_sum.begin(), three_sum.end());
                    
                    if(!hash_map[three_sum]){
                        three_sum_list.push_back(three_sum);
                        hash_map[three_sum] = true;
                    }
                }

                map_sum[nums[itr_index]] = itr_index;
            }
        }

        return three_sum_list;
    }

};
