class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int> ans;
        
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int lsum = 0 , rsum = 0;
            int diff = 0;
            for(int j = 0; j < i; j++)
            {
                lsum = lsum + nums[j];
            }
            for(int j = (i+1); j < n; j++)
            {
                rsum = rsum + nums[j];
            }
            int diff1 = lsum - rsum;
            diff = abs(diff1);
            ans.push_back(diff);
        }
        return ans;
    }
};
