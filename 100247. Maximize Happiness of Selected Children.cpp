class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        long long ans = 0;
        int count = 0;
        sort(happiness.begin() , happiness.end() , greater<int>());
        
        for(int i = 0 ; i<k ; i++)
        {
            if(happiness.empty() || happiness.back() < 0)
            {
                break;
            }
            
            if(happiness[i] - count > 0)
            {
                ans += happiness[i] - count;
                count++;
            }
            
        }
        
        return ans;
        
    }
};