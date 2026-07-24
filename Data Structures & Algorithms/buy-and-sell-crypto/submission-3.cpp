class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = 100;

        int answer = 0;

        for(int index=0; index<prices.size(); index++){
            min_value = min(prices[index], min_value);

            answer = max(answer, prices[index] - min_value);
        }

        return answer;
    }
};
