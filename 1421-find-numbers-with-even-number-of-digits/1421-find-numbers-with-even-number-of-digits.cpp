class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            while(nums[i]!=0){
                count++;
                nums[i]/=10;
            }
            if(count%2==0) ans++;
        }
        return ans;
    }
};