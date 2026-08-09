class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double minimum_price = 0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int price_size = prices.size();
        int discount_size = discounts.size();
        int left = price_size - 1;
        int right = discount_size - 1;
        while(left >= 0 && right >= 0){
            minimum_price += ((double)prices[left] * (100 - (double)discounts[right])) / 100;
            left --, right --;
        }
        while(left >= 0){
            minimum_price += prices[left];
            left --;
        }
        return minimum_price;
    }
};
