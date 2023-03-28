/*
 * @lc app=leetcode id=937 lang=cpp
 *
 * [901] Online Stock Span
 */

// @lc code=start
class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int curr=1;
        while(st.size()!=0 && st.top().first<=price)
        {
            curr+=st.top().second;
            st.pop();
        }
        st.push({price,curr});
        return st.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

