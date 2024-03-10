class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int sum = 0;
        int n = capacity.size();
        int ans = 0;
        
        for(int i = 0 ; i<apple.size();i++)
        {
            sum += apple[i];
        }
        
        
        sort(capacity.begin(), capacity.end() , greater<int>());
        
        // cout<<capacity[0];
        
        for(int i = 0 ; i<n ; i++)
        {
            if(sum <= 0)
            {
                break;
            }
            ans++;
            sum -= capacity[i];
        }
        
        return ans;
        
    }
};