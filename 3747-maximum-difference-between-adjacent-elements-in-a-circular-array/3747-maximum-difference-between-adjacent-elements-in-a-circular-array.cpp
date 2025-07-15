class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxmDiff=0;
        for(int i=0;i<n;i++){
            int diff=0;
            if(i==n-1){
                diff=abs(nums[i]-nums[0]);
                maxmDiff=max(diff,maxmDiff);
            }
            else{
                diff=abs(nums[i]-nums[i+1]);
                maxmDiff=max(diff,maxmDiff);
            }
        }
        return maxmDiff;
    }
};