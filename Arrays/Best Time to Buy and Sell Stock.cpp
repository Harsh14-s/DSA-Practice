class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=INT_MAX;

        for(int i=0;i<prices.size();i++){
            if(prices[i] < minPrice){
                minPrice=prices[i];
            }
            else{
                int profit=prices[i]-minPrice;
                maxProfit=max(maxProfit,profit);
            }
        }
        return maxProfit;
    }
};
