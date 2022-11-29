// Max subarray sum:


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxIterator = INT_MIN;

        for(auto it:nums){
            sum+=it;

            maxIterator = max(sum,maxIterator);

            if(sum<0) sum=0;
        }
        
        return maxIterator;
    }
};