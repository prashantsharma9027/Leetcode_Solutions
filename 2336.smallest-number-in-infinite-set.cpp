/*
 * @lc app=leetcode id=2336 lang=cpp
 *
 * [2336] Smallest Number in Infinite Set
 */

// @lc code=start
class SmallestInfiniteSet {
public:
    set<int> ans;
    SmallestInfiniteSet() {
        for(int i = 1 ; i<=1000 ; i++)
        {
            ans.insert(i);
        }
    }
    
    int popSmallest() {
        
        int a = *ans.begin();
        ans.erase(a);
        return a;
    }
    
    void addBack(int num) {
        
        ans.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
// @lc code=end

