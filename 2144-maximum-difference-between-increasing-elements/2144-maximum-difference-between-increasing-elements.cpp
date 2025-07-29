class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxm=-1;
        for(int i=0;i<n-1;i++){
            int a=0;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    a=nums[j]-nums[i];
                    maxm=max(a,maxm);
                }
            }
        }
        return maxm;
    }
};