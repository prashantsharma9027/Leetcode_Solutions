/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */

// @lc code=start
class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    priority_queue<int> maxHeap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num)
    {
        if(minHeap.empty() || minHeap.top()<num) minHeap.push(num);
        else maxHeap.push(num);

        if(minHeap.size()>maxHeap.size()+1)
        {
            int val=minHeap.top();
            maxHeap.push(val);
            minHeap.pop();
        }
        else if(maxHeap.size()>minHeap.size()+1)
        {
            int val=maxHeap.top();
            minHeap.push(val);
            maxHeap.pop();
        }
    }
    
    double findMedian() 
    {
        if(minHeap.size()>maxHeap.size()){
            return minHeap.top();
        }
        if(maxHeap.size()>minHeap.size()){
            return maxHeap.top();
        }
        return (maxHeap.top()+minHeap.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

