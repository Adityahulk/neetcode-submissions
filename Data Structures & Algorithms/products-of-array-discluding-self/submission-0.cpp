class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        map <int, int> left_to_right_product;
        map <int, int> right_to_left_product;

        left_to_right_product[0] = nums[0];
        right_to_left_product[nums.size()-1] = nums[nums.size()-1];

        for(int index=1;index<nums.size();index++){
            left_to_right_product[index] = left_to_right_product[index-1]*nums[index];
        }

        int nums_vector_size = nums.size();

        for(int index = nums_vector_size-2; index>0; index--){
            right_to_left_product[index] = right_to_left_product[index+1]*nums[index];
        }     

        vector<int> product;

        for(int index=0; index<nums.size(); index++){
            if(index == 0){
                product.push_back(right_to_left_product[index+1]);
            } else if(index == nums.size()-1) {
                product.push_back(left_to_right_product[index-1]);
            } else {
                product.push_back(left_to_right_product[index-1]*right_to_left_product[index+1]);
            }
        }

        return product;
    }

};
