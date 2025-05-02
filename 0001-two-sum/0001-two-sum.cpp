class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int remains=target-a;
            if(mp.find(remains)!=mp.end()){
                return {mp[remains],i};
            }
            mp[a]=i;
        }
        return {-1,-1};
    }
};