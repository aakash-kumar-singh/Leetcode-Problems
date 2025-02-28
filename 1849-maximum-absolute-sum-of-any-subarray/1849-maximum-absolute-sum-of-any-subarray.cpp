class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=INT_MIN;
        int minsum=INT_MAX;
        int curMin=0;
        int curMax=0;
        for(int i:nums){
            curMax=max(i,curMax+i);
            maxsum=max(maxsum,curMax);
            curMin=min(i,curMin+i);
            minsum=min(minsum,curMin);
        }
        return max(maxsum,abs(minsum));

    }
};