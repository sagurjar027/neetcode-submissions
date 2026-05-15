class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_prof = 0
        min_price = prices[0]

        for sell in prices:
            max_prof = max(max_prof,sell - min_price)
            min_price = min(min_price,sell)
        return max_prof