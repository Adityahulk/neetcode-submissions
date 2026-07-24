class Solution {
public:

    bool binary_search(vector<int> matrix_row, int target){

        int start = 0;
        int end = matrix_row.size() - 1;

        while(start <= end){
            int mid = (start + end + 1)/2;

            if(matrix_row[mid] == target){
                return true;
            }

            if(matrix_row[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return false;

    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int start = 0;
        int end = matrix.size() - 1;

        int row_size = matrix[0].size();

        while(start <= end){
            int mid = (start + end + 1)/2;

            if(matrix[mid][row_size - 1] < target){
                start = mid + 1;
                continue;
            }

            if(matrix[mid][0] > target){
                end = mid - 1;
                continue;
            }

            return binary_search(matrix[mid], target);
        }

        return false;
    }
};
